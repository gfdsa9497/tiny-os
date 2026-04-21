#include "hal_mem.h"
#include <stdlib.h>
#include <sys/mman.h>

void *hal_mem_alloc(size_t size){
    return malloc(size);
}

void hal_mem_free(void *ptr){
    free(ptr);
}

void *hal_mem_map(size_t size){
    return mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
}

void hal_mem_unmap(void *ptr, size_t size){
    munmap(ptr, size);
}