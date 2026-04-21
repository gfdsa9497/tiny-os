#ifndef HAL_MEM_H
#define HAL_MEM_H

#include <stddef.h>

void *hal_mem_alloc(size_t size);
void hal_mem_free(void *ptr);
void *hal_mem_map(size_t size);
void hal_mem_unmap(void *ptr, size_t size);

#endif