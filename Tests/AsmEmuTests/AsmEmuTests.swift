import XCTest
@testable import swift_tinyarm
@testable import tinyasm

final class AsmEmuTests: XCTestCase {
    func testAssembler() {
//        let program = """
//        mov r0, #9
//        loop:
//            subs r0, r0, #1
//            bne loop
//        """
        
        tinyasm.Assembler().assemble("ldr r1, [r9]")
        
//        let program = "swine 1"
//
//        let cpu = ArmCPU()
//        cpu.onRegisterChange = { register, newValue in
//            print("REG: \(register) - \(newValue)")
//        }
//        cpu.onSoftwareInterrupt = { comment in
//            print("SWI \(comment)")
//        }
//        cpu.loadProgram(tinyasm.Assembler().assemble(program) + [0, 0, 0, 0])
//        while (cpu.step() == 0) {}
    }

    func testEmulator() {
        let cpu = ArmCPU()
        cpu.onRegisterChange = { register, newValue in
            print(register, newValue)
        }
        cpu.onSoftwareInterrupt = { comment in
            print(comment)
        }
        cpu.loadProgram([0, 0, 0, 0])
        while (cpu.step() == 0) {}
        print("DONE")
    }
    
    func testAsmEmu() {
//        
//        let program = swift_tinyarm.Assembler().assemble("movs r0, #25\nmov r1, #33\nmov r0, r1") + [0, 0, 0, 0]
//        
//        let cpu = ArmCPU()
//        cpu.onRegisterChange = { register, newValue in
//            print("REG: \(register) - \(newValue)")
//        }
//        cpu.onSoftwareInterrupt = { comment in
//            print("SWI \(comment)")
//        }
//        cpu.loadProgram(program)
//        while (cpu.step() == 0) {}
    }

    static var allTests = [
        ("testAssembler", testAssembler),
        ("testEmulator", testEmulator),
        ("testAsmEmu", testAsmEmu)
    ]
}
