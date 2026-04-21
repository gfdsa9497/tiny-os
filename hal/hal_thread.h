#ifndef HAL_THREAD_H
#define HAL_THREAD_H

#include <stdint.h>

typedef struct {
    unsigned long id;
} hal_thread_t;

typedef void *(*hal_thread_func_t)(void *arg);

int hal_thread_create(hal_thread_t *thread, hal_thread_func_t func, void *arg);
void hal_thread_join(hal_thread_t *thread);
void hal_thread_exit(void);
unsigned long hal_thread_self(void);

#endif