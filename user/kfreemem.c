#include "kernel/memlayout.h"
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/riscv.h"

int main(){
    int total_memory = PHYSTOP - KERNBASE;

    int total_pages = total_memory / PGSIZE;

    int free_pages = kfreemem();

    printf("\nxv6 total pages: %d", total_pages);
    printf("\nxv6 free pages: %d", free_pages);
    printf("\nxv6 used pages: %d\n", total_pages - free_pages);

    exit(0);
}