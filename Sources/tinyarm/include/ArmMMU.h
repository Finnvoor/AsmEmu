//
//  ArmMMU.h
//  
//
//  Created by Finn Voorhees on 25/10/2020.
//

#ifndef ArmMMU_h
#define ArmMMU_h

#include <stdio.h>

#define FLASH_START 0x0000
#define FLASH_END 0x1fff

#define SRAM_START 0x2000
#define SRAM_END 0x3fff
#define SRAM_SIZE 1024

struct ArmMMU {
    uint8_t *flash;
    uint8_t sram[SRAM_SIZE];
};

void arm_mmu_reset(struct ArmMMU *mmu);
void arm_mmu_load_program(struct ArmMMU *mmu, uint8_t *program);

uint8_t arm_mmu_read_i8(struct ArmMMU *mmu, uint32_t address);
uint32_t arm_mmu_read_i32_bigendian(struct ArmMMU *mmu, uint32_t address);
uint32_t arm_mmu_read_i32_littleendian(struct ArmMMU *mmu, uint32_t address);

void arm_mmu_write_i8(struct ArmMMU *mmu, uint32_t address, uint8_t value);
void arm_mmu_write_i32_bigendian(struct ArmMMU *mmu, uint32_t address, uint32_t value);
void arm_mmu_write_i32_littleendian(struct ArmMMU *mmu, uint32_t address, uint32_t value);

#endif /* ArmMMU_h */
