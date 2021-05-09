//
//  File.swift
//  
//
//  Created by Finn Voorhees on 14/01/2021.
//

import swift_tree_sitter
import tree_sitter_ARMv7
import Foundation

public class Assembler {
    struct Program {
        let string: String
        let rows: [NSString]
        
        init(_ string: String) {
            self.string = string
            self.rows = string.components(separatedBy: .newlines).map { $0 as NSString }
        }
        
        subscript(index: TSNode) -> String {
            return self[index.startPoint..<index.endPoint]
        }
        
        subscript(aRange: Range<TSPoint>) -> String {
            if aRange.lowerBound.row == aRange.upperBound.row {
                return self.rows[Int(aRange.lowerBound.row)].substring(with: NSRange(location: Int(aRange.lowerBound.column), length: Int(aRange.upperBound.column - aRange.lowerBound.column)))
            }
            
            var row = aRange.lowerBound.row + 1
            var substring = "\(self.rows[Int(aRange.lowerBound.row)].substring(from: Int(aRange.lowerBound.column)))\n"
            while row < aRange.upperBound.row {
                substring += "\(self.rows[Int(row)] as String)\n"
                row += 1
            }
            substring += self.rows[Int(aRange.upperBound.row)].substring(to: Int(aRange.upperBound.column))
            return substring
        }
    }
    
    enum Token: String {
        case symbol
        case label_definition
        case instruction
        
        case condition
        case set_condition_flags
        case Rd
        case Rm
        
        case literal
        case shift
        
        case link
        case expression
        
        case data_processing_instruction
        case multiply_instruction
        case multiply_long_instruction
        case single_data_swap_instruction
        case branch_exchange_instruction
        case halfword_data_transfer_instruction
        case single_data_transfer_instruction
        case branch_instruction
        case software_interrupt_instruction
    }
    
    private enum Register: String {
        case R0, R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, SP, R14, LR, R15, PC
        func field() -> UInt8 {
            switch self {
            case .R0: return 0b0000
            case .R1: return 0b0001
            case .R2: return 0b0010
            case .R3: return 0b0011
            case .R4: return 0b0100
            case .R5: return 0b0101
            case .R6: return 0b0110
            case .R7: return 0b0111
            case .R8: return 0b1000
            case .R9: return 0b1001
            case .R10: return 0b1010
            case .R11: return 0b1011
            case .R12: return 0b1100
            case .R13, .SP: return 0b1101
            case .R14, .LR: return 0b1110
            case .R15, .PC: return 0b1111
            }
        }
    }
    
    private enum Condition: String {
        case EQ, NE, CS, CC, MI, PL, VS, VC, HI, LS, GE, LT, GT, LE, AL
        func field() -> UInt32 {
            switch self {
            case .EQ: return 0b0000 << 28
            case .NE: return 0b0001 << 28
            case .CS: return 0b0010 << 28
            case .CC: return 0b0011 << 28
            case .MI: return 0b0100 << 28
            case .PL: return 0b0101 << 28
            case .VS: return 0b0110 << 28
            case .VC: return 0b0111 << 28
            case .HI: return 0b1000 << 28
            case .LS: return 0b1001 << 28
            case .GE: return 0b1010 << 28
            case .LT: return 0b1011 << 28
            case .GT: return 0b1100 << 28
            case .LE: return 0b1101 << 28
            case .AL: return 0b1110 << 28
            }
        }
    }
    
    private enum Shift: String {
        case ASR, LSL, LSR, ROR, RRX
    }
    
    private enum DataProccessingMnemonic: String {
        case AND, EOR, SUB, RSB, ADD, ADC, SBC, RSC, TST, TEQ, CMP, CMN, ORR, MOV, BIC, MVN
        func field() -> UInt32 {
            switch self {
            case .AND: return 0b0000 << 21
            case .EOR: return 0b0001 << 21
            case .SUB: return 0b0010 << 21
            case .RSB: return 0b0011 << 21
            case .ADD: return 0b0100 << 21
            case .ADC: return 0b0101 << 21
            case .SBC: return 0b0110 << 21
            case .RSC: return 0b0111 << 21
            case .TST: return 0b1000 << 21
            case .TEQ: return 0b1001 << 21
            case .CMP: return 0b1010 << 21
            case .CMN: return 0b1011 << 21
            case .ORR: return 0b1100 << 21
            case .MOV: return 0b1101 << 21
            case .BIC: return 0b1110 << 21
            case .MVN: return 0b1111 << 21
            }
        }
    }
    
    public init() {}
    
    public func assemble(_ program: String) -> [UInt8] {
        let program = Program(program)
        
        let arm = TSLanguage(tree_sitter_ARMv7())
        let parser = TSParser()
        parser.setLanguage(to: arm)
        guard let tree = parser.parse(program.string),
              let cursor = tree.cursor else {
            return []
        }
        
        let expressions = tree.rootNode?.getChildren(using: cursor) ?? []
        
        var labels = self.calculateLabelOffsets(in: program, expressions: expressions)
        var offset = 0
        
        var instructions: [[UInt8]] = []
        for expression in expressions where Token(rawValue: expression.kind) == .instruction {
            instructions.append(self.assembleInstruction(expression, at: offset, in: program, labels: labels))
            offset += 4
        }
        
        return instructions.flatMap({ $0 })
    }
    
    private func calculateLabelOffsets(in program: Program, expressions: [TSNode]) -> [String: Int] {
        var labels: [String: Int] = [:]
        var offset = 0
        for expression in expressions {
            switch Token(rawValue: expression.kind) {
            case .symbol:
                guard let child = expression.child(at: 0) else { continue }
                if Token(rawValue: child.kind) == .label_definition {
                    labels[String(program[child].dropLast())] = offset
                }
            case .instruction:
                offset += 4
            default:
                break
            }
        }
        return labels
    }
    
    private func assembleInstruction(_ instruction: TSNode, at offset: Int, in program: Program, labels: [String: Int]) -> [UInt8] {
        guard let child = instruction.child(at: 0) else { return [] }
        switch Token(rawValue: child.kind) {
        case .data_processing_instruction:
            return self.assembleDataProcessingInstruction(child, at: offset, in: program, labels: labels)
        case .multiply_instruction:
            return self.assembleMultiplyInstruction(child, at: offset, in: program, labels: labels)
        case .multiply_long_instruction:
            return self.assembleMultiplyLongInstruction(child, at: offset, in: program, labels: labels)
        case .single_data_swap_instruction:
            return self.assembleDataSwapInstruction(child, at: offset, in: program, labels: labels)
        case .branch_exchange_instruction:
            return self.assembleBranchExchangeInstruction(child, at: offset, in: program, labels: labels)
        case .halfword_data_transfer_instruction:
            return self.assembleHalfwordDataTransferInstruction(child, at: offset, in: program, labels: labels)
        case .single_data_transfer_instruction:
            return self.assembleSingleDataTransferInstruction(child, at: offset, in: program, labels: labels)
        case .branch_instruction:
            return self.assembleBranchInstruction(child, at: offset, in: program, labels: labels)
        case .software_interrupt_instruction:
            return self.assembleSoftwareInterruptInstruction(child, at: offset, in: program, labels: labels)
        default:
            print("UNKNOWN INSTRUCTION: \(child.kind)")
            break
        }
        return []
    }
    
    private func assembleDataProcessingInstruction(_ instruction: TSNode, at offset: Int, in program: Program, labels: [String: Int]) -> [UInt8] {
        guard let mnemonic = DataProccessingMnemonic(rawValue: program[instruction].prefix(3).uppercased()) else {
            fatalError()
        }
        let conditionBits: UInt32
        if let conditionNode = instruction.child(fieldName: Token.condition.rawValue),
           let condition = Condition(rawValue: program[conditionNode]) {
            conditionBits = condition.field()
        } else {
            conditionBits = Condition.AL.field()
        }
        let setConditionBits: UInt32 = instruction.child(fieldName: Token.set_condition_flags.rawValue) != nil ? 0b1 << 20 : 0b0
        let opCode = mnemonic.field()
        
        var rn: UInt32 = 0b0
        var rd: UInt32 = 0b0
        
        switch mnemonic {
        case .MOV, .MVN:
            guard let rdNode = instruction.child(fieldName: Token.Rd.rawValue) else { fatalError() }
            rd = UInt32(Register(rawValue: program[rdNode].uppercased())?.field() ?? 0) << 12
        case .CMP,
             .CMN,
             .TEQ,
             .TST:
            guard let rnNode = instruction.child(fieldName: Token.Rd.rawValue) else { fatalError() }
            rn = UInt32(Register(rawValue: program[rnNode].uppercased())?.field() ?? 0) << 16
        case .AND,
             .EOR,
             .SUB,
             .RSB,
             .ADD,
             .ADC,
             .SBC,
             .RSC,
             .ORR,
             .BIC:
            guard let rdNode = instruction.child(fieldName: Token.Rd.rawValue) else { fatalError() }
            rd = UInt32(Register(rawValue: program[rdNode].uppercased())?.field() ?? 0) << 12
            guard let rnNode = instruction.child(fieldName: Token.Rd.rawValue) else { fatalError() }
            rn = UInt32(Register(rawValue: program[rnNode].uppercased())?.field() ?? 0) << 16
        }
    
        var immediateOperandBit: UInt32 = 0b0
        let operand2: UInt16
        if let literalNode = instruction.child(fieldName: Token.literal.rawValue) { // immediate value
            immediateOperandBit = 0b1 << 25
            let literal = program[literalNode]
            var imm: UInt16 = 0
            if literal.hasPrefix("0b") {
                if let val = UInt16(String(literal.dropFirst(2)), radix: 2) {
                    imm = val
                } else {
                    fatalError()
                }
            } else if literal.hasPrefix("0o") {
                if let val = UInt16(String(literal.dropFirst(2)), radix: 8) {
                    imm = val
                } else {
                    fatalError()
                }
            } else if literal.hasPrefix("0x") {
                if let val = UInt16(String(literal.dropFirst(2)), radix: 16) {
                    imm = val
                } else {
                    fatalError()
                }
            } else {
                if let val = UInt16(literal) {
                    imm = val
                } else {
                    fatalError()
                }
            }
            
            for i in 0..<16 { // from https://alisdair.mcdiarmid.org/arm-immediate-value-encoding/
                let m = ((imm << (i * 2)) | (imm >> (32 - (i * 2)))) >> 0
                if m < 256 {
                    imm = (UInt16(i) << 8) | m
                    break
                }
                if i == 15 {
                    fatalError()
                }
            }
            let rotate = (imm >> 8) & 0xf
            operand2 = (rotate << 8) | imm
        } else { // register with optional shift
            var shift: UInt16 = 0
            guard let rmNode = instruction.child(fieldName: Token.Rm.rawValue),
                  let rm = Register(rawValue: program[rmNode].uppercased())?.field() else {
                fatalError()
            }
            
            if let shiftNode = instruction.child(fieldName: Token.shift.rawValue),
               let shiftType = Shift(rawValue: program[shiftNode].uppercased()) {
                shift = 999
            }
            
            operand2 = shift | UInt16(rm)
        }
        
        let bits = conditionBits | immediateOperandBit | opCode | setConditionBits | rn | rd | UInt32(operand2)
        return withUnsafeBytes(of: bits.littleEndian, Array.init)
    }
    
    private func assembleMultiplyInstruction(_ instruction: TSNode, at offset: Int, in program: Program, labels: [String: Int]) -> [UInt8] {
        return []
    }
    
    private func assembleMultiplyLongInstruction(_ instruction: TSNode, at offset: Int, in program: Program, labels: [String: Int]) -> [UInt8] {
        return []
    }
    
    private func assembleDataSwapInstruction(_ instruction: TSNode, at offset: Int, in program: Program, labels: [String: Int]) -> [UInt8] {
        return []
    }
    
    private func assembleBranchExchangeInstruction(_ instruction: TSNode, at offset: Int, in program: Program, labels: [String: Int]) -> [UInt8] {
        return []
    }
    
    private func assembleHalfwordDataTransferInstruction(_ instruction: TSNode, at offset: Int, in program: Program, labels: [String: Int]) -> [UInt8] {
        return []
    }
    
    private func assembleSingleDataTransferInstruction(_ instruction: TSNode, at offset: Int, in program: Program, labels: [String: Int]) -> [UInt8] {
        print(instruction.sExpression)
        let conditionBits: UInt32
        if let conditionNode = instruction.child(fieldName: Token.condition.rawValue),
           let condition = Condition(rawValue: program[conditionNode].uppercased()) {
            conditionBits = condition.field()
        } else {
            conditionBits = Condition.AL.field()
        }
        
        
        return []
    }
    
    private func assembleBranchInstruction(_ instruction: TSNode, at offset: Int, in program: Program, labels: [String: Int]) -> [UInt8] {
        let conditionBits: UInt32
        if let conditionNode = instruction.child(fieldName: Token.condition.rawValue),
           let condition = Condition(rawValue: program[conditionNode].uppercased()) {
            conditionBits = condition.field()
        } else {
            conditionBits = Condition.AL.field()
        }
        let linkBit: UInt32 = instruction.child(fieldName: Token.link.rawValue) != nil ? (0b1 << 24) : 0
        
        var relativeOffset: UInt32 = 0
        if let expression = instruction.child(fieldName: Token.expression.rawValue),
           let expressionNode = expression.child(at: 0) {
            if expressionNode.kind == "label_reference" {
                let label = program[expressionNode]
                guard let labelOffset = labels[label] else {
                    fatalError()
                }
                relativeOffset = (UInt32(bitPattern: Int32(labelOffset - (offset + 8))) >> 2) & 0xffffff
            } else if expressionNode.kind == "literal" {
                fatalError()
            }
        }
        
        let bits = conditionBits | (0b101 << 25) | linkBit | relativeOffset
        return withUnsafeBytes(of: bits.littleEndian, Array.init)
    }
    
    private func assembleSoftwareInterruptInstruction(_ instruction: TSNode, at offset: Int, in program: Program, labels: [String: Int]) -> [UInt8] {
        let conditionBits: UInt32
        if let conditionNode = instruction.child(fieldName: Token.condition.rawValue),
           let condition = Condition(rawValue: program[conditionNode].uppercased()) {
            conditionBits = condition.field()
        } else {
            conditionBits = Condition.AL.field()
        }
        
        var comment: UInt32 = 0
        if let expression = instruction.child(fieldName: Token.expression.rawValue),
           let expressionNode = expression.child(at: 0) {
            if expressionNode.kind == "literal" {
                guard let literal = UInt32(program[expressionNode]) else { fatalError() }
                comment = literal
            } else {
                fatalError()
            }
        }
        
        let bits = conditionBits | (0b1111 << 24) | (comment & 0xfff)
        return withUnsafeBytes(of: bits.littleEndian, Array.init)
    }
}
