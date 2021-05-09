//
//  ArmMMU.c
//  
//
//  Created by Finn Voorhees on 25/10/2020.
//

#include "ArmMMU.h"

void arm_mmu_reset(struct ArmMMU *mmu) {
    for (int i = 0; i < SRAM_SIZE; i++) {
        mmu->sram[i] = 0;
    }
}

void arm_mmu_load_program(struct ArmMMU *mmu, uint8_t *program) {
    mmu->flash = program;
}

#pragma mark Read
uint8_t arm_mmu_read_i8(struct ArmMMU *mmu, uint32_t address) {
    if (address >= FLASH_START && address <= FLASH_END) {
        return mmu->flash[address - FLASH_START];
    } else if (address >= SRAM_START && address <= SRAM_END) {
        return mmu->sram[address - SRAM_START];
    } else {
        printf("READ OUT OF BOUNDS\n");
        return 0;
    }
}

uint32_t arm_mmu_read_i32_bigendian(struct ArmMMU *mmu, uint32_t address) {
    if (address >= FLASH_START && address <= FLASH_END) {
        return mmu->flash[address - FLASH_START + 3] | (mmu->flash[address - FLASH_START + 2] << 8) | (mmu->flash[address - FLASH_START + 1] << 16) | (mmu->flash[address - FLASH_START] << 24);
    } else if (address >= SRAM_START && address <= SRAM_END) {
        return mmu->sram[address - SRAM_START + 3] | (mmu->sram[address - SRAM_START + 2] << 8) | (mmu->sram[address - SRAM_START + 1] << 16) | (mmu->sram[address - SRAM_START] << 24);
    } else {
        printf("READ OUT OF BOUNDS\n");
        return 0;
    }
}

uint32_t arm_mmu_read_i32_littleendian(struct ArmMMU *mmu, uint32_t address) {
    if (address >= FLASH_START && address <= FLASH_END) {
        return mmu->flash[address - FLASH_START] | (mmu->flash[address - FLASH_START + 1] << 8) | (mmu->flash[address - FLASH_START + 2] << 16) | (mmu->flash[address - FLASH_START + 3] << 24);
    } else if (address >= SRAM_START && address <= SRAM_END) {
        return mmu->sram[address - SRAM_START] | (mmu->sram[address - SRAM_START + 1] << 8) | (mmu->sram[address - SRAM_START + 2] << 16) | (mmu->sram[address - SRAM_START + 3] << 24);
    } else {
        printf("READ OUT OF BOUNDS\n");
        return 0;
    }
}

#pragma mark Write
void arm_mmu_write_i8(struct ArmMMU *mmu, uint32_t address, uint8_t value) {
    if (address >= FLASH_START && address <= FLASH_END) {
        mmu->flash[address - FLASH_START] = value;
    } else if (address >= SRAM_START && address <= SRAM_END) {
        mmu->sram[address - SRAM_START] = value;
    } else {
        printf("WRITE OUT OF BOUNDS\n");
    }
}


void arm_mmu_write_i32_bigendian(struct ArmMMU *mmu, uint32_t address, uint32_t value) {
    if (address >= FLASH_START && address <= FLASH_END) {
        mmu->flash[address - FLASH_START + 3] = (uint8_t)value;
        mmu->flash[address - FLASH_START + 2] = (uint8_t)(value >>= 8);
        mmu->flash[address - FLASH_START + 1] = (uint8_t)(value >>= 8);
        mmu->flash[address - FLASH_START] = (uint8_t)(value >>= 8);
    } else if (address >= SRAM_START && address <= SRAM_END) {
        mmu->sram[address - SRAM_START + 3] = (uint8_t)value;
        mmu->sram[address - SRAM_START + 2] = (uint8_t)(value >>= 8);
        mmu->sram[address - SRAM_START + 1] = (uint8_t)(value >>= 8);
        mmu->sram[address - SRAM_START] = (uint8_t)(value >>= 8);
    } else {
        printf("WRITE OUT OF BOUNDS\n");
    }
}

void arm_mmu_write_i32_littleendian(struct ArmMMU *mmu, uint32_t address, uint32_t value) {
    if (address >= FLASH_START && address <= FLASH_END) {
        mmu->flash[address - FLASH_START] = (uint8_t)value;
        mmu->flash[address - FLASH_START + 1] = (uint8_t)(value >>= 8);
        mmu->flash[address - FLASH_START + 2] = (uint8_t)(value >>= 8);
        mmu->flash[address - FLASH_START + 3] = (uint8_t)(value >>= 8);
    } else if (address >= SRAM_START && address <= SRAM_END) {
        mmu->sram[address - SRAM_START] = (uint8_t)value;
        mmu->sram[address - SRAM_START + 1] = (uint8_t)(value >>= 8);
        mmu->sram[address - SRAM_START + 2] = (uint8_t)(value >>= 8);
        mmu->sram[address - SRAM_START + 3] = (uint8_t)(value >>= 8);
    } else {
        printf("WRITE OUT OF BOUNDS\n");
    }
}
