#include <pthread.h>
#include "hal_thread.h"

int hal_thread_create(hal_thread_t *thread, hal_thread_func_t func, void *arg){
    return pthread_create((pthread_t *)&thread->id, NULL, func, arg);
}

void hal_thread_join(hal_thread_t *thread){
    pthread_join((pthread_t)thread->id, NULL);
}
void hal_thread_exit(void){
    pthread_exit(NULL);
}
unsigned long hal_thread_self(void){
    return (unsigned long) pthread_self();
}