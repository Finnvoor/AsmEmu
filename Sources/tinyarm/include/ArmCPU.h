//
//  ArmCPU.h
//  
//
//  Created by Finn Voorhees on 25/10/2020.
//

#ifndef ArmCPU_h
#define ArmCPU_h

#include <stdio.h>

enum Registers {
    R0,
    R1,
    R2,
    R3,
    R4,
    R5,
    R6,
    R7,
    R8,
    R9,
    R10,
    R11,
    R12,
    SP,
    LR,
    PC,
    CPSR,
    NUM_REGISTERS
};

struct ArmCPU {
    uint32_t registers[NUM_REGISTERS];
    struct ArmMMU *mmu;
    int verbose;
    
    /// onRegisterChange: called when register is set (register, newValue)
    void (*onRegisterChange)(int, uint32_t);
    
    /// onSoftwareInterrupt: called when software interrupt occurs (comment)
    void (*onSoftwareInterrupt)(uint32_t);
    
    /// afterInstructionExecution: called after an instruction is executed 
    void (*afterInstructionExecution)();
};

void arm_cpu_init(struct ArmCPU *cpu);
void arm_cpu_reset(struct ArmCPU *cpu);
void arm_cpu_load_program(struct ArmCPU *cpu, uint8_t *program);
int arm_cpu_execute_instruction(struct ArmCPU *cpu);
void arm_cpu_write_register(struct ArmCPU *cpu, int reg, uint32_t value);
void arm_cpu_run(struct ArmCPU *cpu, int stepCount);

#endif /* ArmCPU_h */
