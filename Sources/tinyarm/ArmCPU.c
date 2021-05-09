//
//  ArmCPU.c
//  
//
//  Created by Finn Voorhees on 25/10/2020.
//

#include "ArmCPU.h"
#include "ArmMMU.h"
#include <stdlib.h>

uint32_t arm_cpu_shifted_register_value(struct ArmCPU *cpu, uint8_t shift, uint8_t reg, uint8_t *carry) {
    uint8_t shiftType = (shift >> 1) & 0b11;
    uint8_t shiftAmount = 0;
    if ((shift & 0b1) == 1) {
        uint8_t rs = (shift >> 4) & 0b1111;
        shiftAmount = cpu->registers[rs] & 0b1111;
    } else {
        shiftAmount = (shift >> 3) & 0b11111;
    }
    if (shiftAmount == 0) {
        return cpu->registers[reg];
    }
    if (shiftType == 0b00) { // logical left
        uint32_t preShift = cpu->registers[reg] << (shiftAmount - 1);
        *carry = (preShift >> 31) & 0b1;
        return preShift << 1;
    } else if (shiftType == 0b01) { // logical right
        return cpu->registers[reg] >> shiftAmount;
    } else if (shiftType == 0b10) { // arithmetic right
        
    } else if (shiftType == 0b11) { // rotate right
        
    }
}

#pragma mark Condition code
int cond_is_fulfilled(uint8_t cond, uint32_t cpsr) {
    switch (cond) {
        case 0b0000: // EQ
            return (cpsr >> 30) & 0b1;
        case 0b0001: // NE
            return ((cpsr >> 30) & 0b1) == 0b0;
        case 0b0010: // CS
            return (cpsr >> 29) & 0b1;
        case 0b0011: // CC
            return ((cpsr >> 29) & 0b1) == 0b0;
        case 0b0100: // MI
            return (cpsr >> 31) & 0b1;
        case 0b0101: // PL
            return ((cpsr >> 31) & 0b1) == 0b0;
        case 0b0110: // VS
            return (cpsr >> 28) & 0b1;
        case 0b0111: // VC
            return ((cpsr >> 28) & 0b1) == 0b0;
        case 0b1000: // HI
            return ((cpsr >> 29) & 0b1) & (((cpsr >> 30) & 0b1) == 0b0);
        case 0b1001: // LS
            return (((cpsr >> 29) & 0b1) == 0b0) | ((cpsr >> 30) & 0b1);
        case 0b1010: // GE
            return ((cpsr >> 31) & 0b1) == ((cpsr >> 28) & 0b1);
        case 0b1011: // LT
            return ((cpsr >> 31) & 0b1) != ((cpsr >> 28) & 0b1);
        case 0b1100: // GT
            return (((cpsr >> 30) & 0b1) == 0b0) & (((cpsr >> 31) & 0b1) == ((cpsr >> 28) & 0b1));
        case 0b1101: // LE
            return ((cpsr >> 30) & 0b1) | (((cpsr >> 31) & 0b1) != ((cpsr >> 28) & 0b1));
        case 0b1110: // AL
            return 0b1;
        default:
            printf("Unexpected Condition\n");
            return 0b1;
    }
}

#pragma mark Instruction typechecking
int instr_is_data_processing(uint32_t instr) {
    return (instr & 0b00001100000000000000000000000000) == 0b00000000000000000000000000000000;
}

int instr_is_multiply(uint32_t instr) {
    return (instr & 0b00001111110000000000000011110000) == 0b00000000000000000000000010010000;
}

int instr_is_multiply_long(uint32_t instr) {
    return (instr & 0b00001111100000000000000011110000) == 0b00000000100000000000000010010000;
}

int instr_is_single_data_swap(uint32_t instr) {
    return (instr & 0b00001111101100000000111111110000) == 0b00000001000000000000000010010000;
}

int instr_is_branch_exchange(uint32_t instr) {
    return (instr & 0b00001111111111111111111111110000) == 0b00000001001011111111111100010000;
}

int instr_is_halfword_data_transfer_register_offset(uint32_t instr) {
    return (instr & 0b00001110010000000000111110010000) == 0b00000000000000000000000010010000;
}

int instr_is_halfword_data_transfer_immediate_offset(uint32_t instr) {
    return (instr & 0b00001110010000000000000010010000) == 0b00000000010000000000000010010000;
}

int instr_is_single_data_transfer(uint32_t instr) {
    return (instr & 0b00001100000000000000000000000000) == 0b00000100000000000000000000000000;
}

int instr_is_undefined(uint32_t instr) {
    return (instr & 0b00001110000000000000000000010000) == 0b00000110000000000000000000010000;
}

int instr_is_block_data_transfer(uint32_t instr) {
    return (instr & 0b00001110000000000000000000000000) == 0b00001000000000000000000000000000;
}

int instr_is_branch(uint32_t instr) {
    return (instr & 0b00001110000000000000000000000000) == 0b00001010000000000000000000000000;
}

int instr_is_coprocessor_data_transfer(uint32_t instr) {
    return (instr & 0b00001110000000000000000000000000) == 0b00001100000000000000000000000000;
}

int instr_is_coprocessor_data_operation(uint32_t instr) {
    return (instr & 0b00001111000000000000000000010000) == 0b00001110000000000000000000000000;
}

int instr_is_coprocessor_register_transfer(uint32_t instr) {
    return (instr & 0b00001111000000000000000000010000) == 0b00001110000000000000000000010000;
}

int instr_is_software_interrupt(uint32_t instr) {
    return (instr & 0b00001111000000000000000000000000) == 0b00001111000000000000000000000000;
}

#pragma mark Instruction execution
void exec_instr_data_processing(struct ArmCPU *cpu, uint32_t instr) {
    uint8_t immediateOperand = (instr >> 25) & 0b1;
    uint8_t opCode = (instr >> 21) & 0b1111;
    uint8_t setCondition = (instr >> 20) & 0b1;
    uint8_t rn = (instr >> 16) & 0b1111;
    uint8_t rd = (instr >> 12) & 0b1111;
    
    uint8_t carry = (cpu->registers[CPSR] >> 29) & 0b1;
    uint32_t operand2;
    if (immediateOperand == 1) {
        uint8_t rotate = ((instr >> 8) & 0b1111) * 2;
        operand2 = instr & 0b11111111;
        operand2 = (operand2 >> rotate) | (operand2 << (32 - rotate));
    } else {
        uint8_t shift = (instr >> 4) & 0b11111111;
        uint8_t rm = instr & 0b1111;
        operand2 = arm_cpu_shifted_register_value(cpu, shift, rm, &carry);
    }
    
    uint32_t result;
    switch (opCode) {
        case 0b0000: // AND
            result = cpu->registers[rn] & operand2;
            arm_cpu_write_register(cpu, rd, result);
            break;
        case 0b0001: // EOR
            result = cpu->registers[rn] ^ operand2;
            arm_cpu_write_register(cpu, rd, result);
            break;
        case 0b0010: // SUB
            result = cpu->registers[rn] - operand2;
            arm_cpu_write_register(cpu, rd, result);
            break;
        case 0b0011: // RSB
            result = operand2 - cpu->registers[rn];
            arm_cpu_write_register(cpu, rd, result);
            break;
        case 0b0100: // ADD
            result = cpu->registers[rn] + operand2;
            arm_cpu_write_register(cpu, rd, result);
            break;
        case 0b0101: // ADC
            result = cpu->registers[rn] + operand2 + carry;
            arm_cpu_write_register(cpu, rd, result);
            break;
        case 0b0110: // SBC
            result = cpu->registers[rn] - operand2 + carry - 1;
            arm_cpu_write_register(cpu, rd, result);
            break;
        case 0b0111: // RSC
            result = operand2 - cpu->registers[rn] + carry - 1;
            break;
        case 0b1000: // TST
            result = cpu->registers[rn] & operand2;
            break;
        case 0b1001: // TEQ
            result = cpu->registers[rn] ^ operand2;
            break;
        case 0b1010: // CMP
            result = cpu->registers[rn] - operand2;
            break;
        case 0b1011: // CMN
            result = cpu->registers[rn] + operand2;
            break;
        case 0b1100: // ORR
            result = cpu->registers[rn] | operand2;
            arm_cpu_write_register(cpu, rd, result);
            break;
        case 0b1101: // MOV
            result = operand2;
            arm_cpu_write_register(cpu, rd, result);
            break;
        case 0b1110: // BIC
            result = cpu->registers[rn] & (~operand2);
            arm_cpu_write_register(cpu, rd, result);
            break;
        case 0b1111: // MVN
            result = ~operand2;
            arm_cpu_write_register(cpu, rd, result);
            break;
    }
    
    if (setCondition == 1) {
        uint32_t z = result == 0;
        uint32_t n = (result >> 31) & 0b1;
        
        uint32_t newCPSR = (cpu->registers[CPSR] & ~(1UL << 29)) | (carry << 29);
        newCPSR = (newCPSR & ~(1UL << 30)) | (z << 30);
        newCPSR = (newCPSR & ~(1UL << 31)) | (n << 31);
        
        arm_cpu_write_register(cpu, CPSR, newCPSR);
    }
    
    if (rd != PC) {
        arm_cpu_write_register(cpu, PC, cpu->registers[PC] + 4);
    }
}

void exec_instr_multiply(struct ArmCPU *cpu, uint32_t instr) {
    uint8_t accumulate = (instr >> 21) & 0b1;
    uint8_t setCondition = (instr >> 20) & 0b1;
    uint8_t rd = (instr >> 16) & 0b1111;
    uint8_t rn = (instr >> 12) & 0b1111;
    uint8_t rs = (instr >> 8) & 0b1111;
    uint8_t rm = instr & 0b1111;
    
    arm_cpu_write_register(cpu, rd, cpu->registers[rm] * cpu->registers[rs]);
    if (accumulate == 1) {
        arm_cpu_write_register(cpu, rd, cpu->registers[rd] + cpu->registers[rn]);
    }
    
    if (setCondition == 1) {
        uint32_t z = cpu->registers[rd] == 0;
        uint32_t n = (cpu->registers[rd] >> 31) & 0b1;
        
        uint32_t newCPSR = (cpu->registers[CPSR] & ~(1UL << 30)) | (z << 30);
        newCPSR = (newCPSR & ~(1UL << 31)) | (n << 31);
        
        arm_cpu_write_register(cpu, CPSR, newCPSR);
    }
    
    if (rd != PC) {
        arm_cpu_write_register(cpu, PC, cpu->registers[PC] + 4);
    }
}

void exec_instr_multiply_long(struct ArmCPU *cpu, uint32_t instr) {
    uint8_t isSigned = (instr >> 22) & 0b1;
    uint8_t accumulate = (instr >> 21) & 0b1;
    uint8_t setCondition = (instr >> 20) & 0b1;
    uint8_t rdHi = (instr >> 16) & 0b1111;
    uint8_t rdLo = (instr >> 12) & 0b1111;
    uint8_t rs = (instr >> 8) & 0b1111;
    uint8_t rm = instr & 0b1111;
    
    if (isSigned == 1) {
        int64_t result = (int64_t)cpu->registers[rm] * (int64_t)cpu->registers[rs];
        if (accumulate == 1) {
            result += ((int64_t)cpu->registers[rdHi] << 32) + (int64_t)cpu->registers[rdLo];;
        }
        arm_cpu_write_register(cpu, rdLo, result & 0xFFFFFFFF);
        arm_cpu_write_register(cpu, rdHi, (result >> 32) & 0xFFFFFFFF);
    } else {
        uint64_t result = (uint64_t)cpu->registers[rm] * (uint64_t)cpu->registers[rs];
        if (accumulate == 1) {
            result += ((uint64_t)cpu->registers[rdHi] << 32) + (uint64_t)cpu->registers[rdLo];;
        }
        arm_cpu_write_register(cpu, rdLo, result & 0xFFFFFFFF);
        arm_cpu_write_register(cpu, rdHi, (result >> 32) & 0xFFFFFFFF);
    }
    
    if (setCondition == 1) {
        uint32_t z = (cpu->registers[rdLo] == 0 && cpu->registers[rdHi] == 0);
        uint32_t n = (cpu->registers[rdHi] >> 31) & 0b1;
        
        uint32_t newCPSR = (cpu->registers[CPSR] & ~(1UL << 30)) | (z << 30);
        newCPSR = (newCPSR & ~(1UL << 31)) | (n << 31);
        
        arm_cpu_write_register(cpu, CPSR, newCPSR);
    }
    
    if (rdLo != PC && rdHi != PC) {
        arm_cpu_write_register(cpu, PC, cpu->registers[PC] + 4);
    }
}

void exec_single_data_swap(struct ArmCPU *cpu, uint32_t instr) {
    uint8_t byte = (instr >> 22) & 0b1;
    uint8_t rn = (instr >> 16) & 0b1111;
    uint8_t rd = (instr >> 12) & 0b1111;
    uint8_t rm = instr & 0b1111;
    
    if (byte == 1) {
        arm_cpu_write_register(cpu, rd, arm_mmu_read_i8(cpu->mmu, cpu->registers[rn]));
        arm_mmu_write_i8(cpu->mmu, cpu->registers[rn], cpu->registers[rm]);
    } else {
        arm_cpu_write_register(cpu, rd, arm_mmu_read_i32_littleendian(cpu->mmu, cpu->registers[rn]));
        arm_mmu_write_i32_bigendian(cpu->mmu, cpu->registers[rn], cpu->registers[rm]);
    }
}

void exec_instr_branch_exchange(struct ArmCPU *cpu, uint32_t instr) {
    uint8_t rn = instr & 0b1111;
    arm_cpu_write_register(cpu, PC, cpu->registers[rn]);
}

void exec_instr_halfword_data_transfer_register_offset(struct ArmCPU *cpu, uint32_t instr) {
    uint8_t preIndexing = (instr >> 24) & 0b1;
    uint8_t up = (instr >> 23) & 0b1;
    uint8_t writeBack = (instr >> 21) & 0b1;
    uint8_t load = (instr >> 20) & 0b1;
    uint8_t rn = (instr >> 16) & 0b1111;
    uint8_t rd = (instr >> 12) & 0b1111;
    uint8_t sh = (instr >> 5) & 0b11;
    uint8_t rm = instr & 0b1111;
}

void exec_instr_halfword_data_transfer_immediate_offset(struct ArmCPU *cpu, uint32_t instr) {
    uint8_t preIndexing = (instr >> 24) & 0b1;
    uint8_t up = (instr >> 23) & 0b1;
    uint8_t writeBack = (instr >> 21) & 0b1;
    uint8_t load = (instr >> 20) & 0b1;
    uint8_t rn = (instr >> 16) & 0b1111;
    uint8_t rd = (instr >> 12) & 0b1111;
    uint8_t offsetHigh = (instr >> 8) & 0b1111;
    uint8_t sh = (instr >> 5) & 0b11;
    uint8_t offsetLow = instr & 0b1111;
}

void exec_instr_single_data_transfer(struct ArmCPU *cpu, uint32_t instr) {
    uint8_t immediateOffset = (instr >> 25) & 0b1;
    uint8_t preIndexing = (instr >> 24) & 0b1;
    uint8_t up = (instr >> 23) & 0b1;
    uint8_t byte = (instr >> 22) & 0b1;
    uint8_t writeBack = (instr >> 21) & 0b1;
    uint8_t load = (instr >> 20) & 0b1;
    uint8_t rn = (instr >> 16) & 0b1111;
    uint8_t rd = (instr >> 12) & 0b1111;
    uint32_t offset = 0;
    
    if (immediateOffset == 1) {
        uint8_t shift = (offset >> 4) & 0b11111111;
        uint8_t offsetRegister = offset & 0b1111;
        uint8_t carry = 0;
        offset = arm_cpu_shifted_register_value(cpu, shift, offsetRegister, &carry);
    } else {
        offset = instr & 0b111111111111;
    }
    
    uint32_t address = cpu->registers[rn];
    if (preIndexing == 1) {
        if (up == 1) {
            address += offset;
        } else {
            address -= offset;
        }
    }
    
    if (load == 1) { // LDR
        if (byte == 1) {
            arm_cpu_write_register(cpu, rd, (uint32_t)arm_mmu_read_i8(cpu->mmu, address));
        } else {
            arm_cpu_write_register(cpu, rd, arm_mmu_read_i32_littleendian(cpu->mmu, address));
        }
    } else { // STR
        uint32_t value = cpu->registers[rd];
        if (byte == 1) {
            arm_mmu_write_i8(cpu->mmu, address, (uint8_t)(value & 0b1111));
        } else {
            arm_mmu_write_i32_littleendian(cpu->mmu, address, value);
        }
    }
    
    if (preIndexing == 0) {
        if (up == 1) {
            address += offset;
        } else {
            address -= offset;
        }
    }
    
    if (preIndexing == 0 || writeBack == 1) {
        arm_cpu_write_register(cpu, rn, address);
    }
    
    arm_cpu_write_register(cpu, PC, cpu->registers[PC] + 4);
}

void exec_instr_branch(struct ArmCPU *cpu, uint32_t instr) {
    uint8_t link = (instr >> 24) & 0b1;
    int32_t offset = (instr & 0x00ffffff) << 2;
    uint8_t sign = (offset >> 25) & 0b1;
    offset |=  ((sign == 0) ? 0 : 0xff000000);

    if (link == 1) {
        arm_cpu_write_register(cpu, LR, cpu->registers[PC] + 4);
    }
    
    arm_cpu_write_register(cpu, PC, cpu->registers[PC] + offset + 8);
}

void exec_instr_software_interrupt(struct ArmCPU *cpu, uint32_t instr) {
    uint32_t comment = instr & 0xFFFFFF;
    if (cpu->onSoftwareInterrupt != NULL) {
        cpu->onSoftwareInterrupt(comment);
    }
    arm_cpu_write_register(cpu, PC, cpu->registers[PC] + 4);
}

void arm_cpu_write_register(struct ArmCPU *cpu, int reg, uint32_t value) {
    cpu->registers[reg] = value;
    if (cpu->onRegisterChange != NULL) {
        cpu->onRegisterChange(reg, value);
    }
}

void arm_cpu_init(struct ArmCPU *cpu) {
    struct ArmMMU *mmu;
    mmu = malloc(sizeof(struct ArmMMU));
    mmu->flash = NULL;
    cpu->mmu = mmu;
    cpu->verbose = 0;
    cpu->onRegisterChange = NULL;
    cpu->onSoftwareInterrupt = NULL;
    cpu->afterInstructionExecution = NULL;
    arm_cpu_reset(cpu);
}

void arm_cpu_reset(struct ArmCPU *cpu) {
    for (int i = 0; i < NUM_REGISTERS; i++) {
        arm_cpu_write_register(cpu, i, 0);
    }
    arm_mmu_reset(cpu->mmu);
    arm_cpu_write_register(cpu, SP, SRAM_START + SRAM_SIZE);
}

void arm_cpu_load_program(struct ArmCPU *cpu, uint8_t *program) {
    arm_mmu_load_program(cpu->mmu, program);
    arm_cpu_write_register(cpu, PC, FLASH_START);
}

int arm_cpu_execute_instruction(struct ArmCPU *cpu) {
    uint32_t instr = arm_mmu_read_i32_littleendian(cpu->mmu, cpu->registers[PC]);
    uint8_t cond = (instr >> 28) & 0b1111;
    if (instr == 0) {
        return -1;
    }
    
    if (!cond_is_fulfilled(cond, cpu->registers[CPSR])) {
        arm_cpu_write_register(cpu, PC, cpu->registers[PC] + 4);
        cpu->afterInstructionExecution();
        return 0;
    }
    
    uint8_t instructionType = ((instr >> 26) & 0b11);
    if (instructionType == 0b00) {
        if (instr_is_branch_exchange(instr)) {
            cpu->verbose && printf("BRANCH EXCHANGE\n");
            exec_instr_branch_exchange(cpu, instr);
        } else if (instr_is_single_data_swap(instr)) {
            cpu->verbose && printf("SINGLE DATA SWAP\n");
            exec_single_data_swap(cpu, instr);
        } else if (instr_is_multiply(instr)) {
            cpu->verbose && printf("MULTIPLY\n");
            exec_instr_multiply(cpu, instr);
        } else if (instr_is_halfword_data_transfer_register_offset(instr)) {
            cpu->verbose && printf("HALFWORD DATA TRANSFER REGISTER OFFSET\n");
        } else if (instr_is_multiply_long(instr)) {
            cpu->verbose && printf("MULTIPLY LONG\n");
            exec_instr_multiply_long(cpu, instr);
        } else if (instr_is_halfword_data_transfer_immediate_offset(instr)) {
            cpu->verbose && printf("HALFWORD DATA TRANSFER IMMEDIATE OFFSET\n");
        } else if (instr_is_data_processing(instr)) {
            cpu->verbose && printf("DATA PROCESSING\n");
            exec_instr_data_processing(cpu, instr);
        }
    } else if (instructionType == 0b01) {
        if (instr_is_undefined(instr)) {
            cpu->verbose && printf("UNDEFINED\n");
        } else if (instr_is_single_data_transfer(instr)) {
            cpu->verbose && printf("SINGLE DATA TRANSFER\n");
            exec_instr_single_data_transfer(cpu, instr);
        }
    } else if (instructionType == 0b10) {
        if (instr_is_block_data_transfer(instr)) {
            cpu->verbose && printf("BLOCK DATA TRANSFER\n");
        } else if (instr_is_branch(instr)) {
            cpu->verbose && printf("BRANCH\n");
            exec_instr_branch(cpu, instr);
        }
    } else {
        if (instr_is_coprocessor_data_transfer(instr)) {
            cpu->verbose && printf("COPROCESSOR DATA TRANSFER\n");
        } else if (instr_is_coprocessor_data_operation(instr)) {
            cpu->verbose && printf("COPROCESSOR DATA OPERATION\n");
        } else if (instr_is_coprocessor_register_transfer(instr)) {
            cpu->verbose && printf("COPROCESSOR REGISTER TRANSFER\n");
        } else if (instr_is_software_interrupt(instr)) {
            cpu->verbose && printf("SOFTWARE INTERRUPT\n");
            exec_instr_software_interrupt(cpu, instr);
        }
    }
    cpu->afterInstructionExecution();
    return 0;
}

void arm_cpu_run(struct ArmCPU *cpu, int stepCount) {
    if (stepCount == 0) {
        while (arm_cpu_execute_instruction(cpu) == 0) {}
    }
}
