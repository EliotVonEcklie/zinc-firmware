/*
    H4ck Software 2021

    <src/hardware/memory.h>

    Memory Management Functions.

    Author: Joseph Hans Diaz Gonzalez <eliotvonecklie@gmail.com>
*/

#ifndef MEMORY_H
#define MEMORY_H

void mmu_init();
void mmu_load_page(unsigned page, long physical_address);
void mmu_copy_page(unsigned src_page, unsigned dst_page);

#endif /* MEMORY_H */
