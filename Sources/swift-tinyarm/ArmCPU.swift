//
//  ArmCPU.swift
//  
//
//  Created by Finn Voorhees on 05/11/2020.
//

import Foundation
import tinyarm

public class ArmCPU {
    private var cArmCPU = tinyarm.ArmCPU()
    private var program: [UInt8] = []
    
    public var verbose = false {
        didSet {
            self.cArmCPU.verbose = self.verbose ? 1 : 0
        }
    }
    
    public var onRegisterChange: (@convention(c) (Int32, UInt32) -> Void)? {
        didSet { self.cArmCPU.onRegisterChange = self.onRegisterChange }
    }
    public var onSoftwareInterrupt: (@convention(c) (UInt32) -> Void)? {
        didSet { self.cArmCPU.onSoftwareInterrupt = self.onSoftwareInterrupt }
    }
    public var afterInstructionExecution: (@convention(c) () -> Void)? {
        didSet { self.cArmCPU.afterInstructionExecution = self.afterInstructionExecution }
    }
    
    public init() {
        arm_cpu_init(&self.cArmCPU)
    }
    
    deinit {
        free(self.cArmCPU.mmu)
    }
    
    public func reset() {
        arm_cpu_reset(&self.cArmCPU)
    }
    
    public func loadProgram(_ program: [UInt8]) {
        self.program = program
        arm_cpu_load_program(&self.cArmCPU, &self.program)
    }
    
    public func step() -> Int {
        return Int(arm_cpu_execute_instruction(&self.cArmCPU))
    }
    
    public func run() {
        arm_cpu_run(&self.cArmCPU, 0)
    }
    
    public func readMMUI8(at address: UInt32) -> UInt8 {
        return arm_mmu_read_i8(self.cArmCPU.mmu, address)
    }
    
    public func writeMMUI8(at address: UInt32, value: UInt8) {
        arm_mmu_write_i8(self.cArmCPU.mmu, address, value)
    }
    
    public func readMMUI32BigEndian(at address: UInt32) -> UInt32 {
        return arm_mmu_read_i32_bigendian(self.cArmCPU.mmu, address)
    }
    
    public func readMMUI32LittleEndian(at address: UInt32) -> UInt32 {
        return arm_mmu_read_i32_littleendian(self.cArmCPU.mmu, address)
    }
    
    public func writeMMUI32BigEndian(at address: UInt32, value: UInt32) {
        arm_mmu_write_i32_bigendian(self.cArmCPU.mmu, address, value)
    }
    
    public func writeMMUI32LittleEndian(at address: UInt32, value: UInt32) {
        arm_mmu_write_i32_littleendian(self.cArmCPU.mmu, address, value)
    }
    
    public func registerValue(_ register: Int) -> UInt32 {
        switch register {
        case 0:
            return self.cArmCPU.registers.0
        case 1:
            return self.cArmCPU.registers.1
        case 2:
            return self.cArmCPU.registers.2
        case 3:
            return self.cArmCPU.registers.3
        case 4:
            return self.cArmCPU.registers.4
        case 5:
            return self.cArmCPU.registers.5
        case 6:
            return self.cArmCPU.registers.6
        case 7:
            return self.cArmCPU.registers.7
        case 8:
            return self.cArmCPU.registers.8
        case 9:
            return self.cArmCPU.registers.9
        case 10:
            return self.cArmCPU.registers.10
        case 11:
            return self.cArmCPU.registers.11
        case 12:
            return self.cArmCPU.registers.12
        case 13:
            return self.cArmCPU.registers.13
        case 14:
            return self.cArmCPU.registers.14
        case 15:
            return self.cArmCPU.registers.15
        case 16:
            return self.cArmCPU.registers.16
        default:
            return 0
        }
    }
}
