#include "hal_timer.h"
#include <time.h>

uint64_t hal_timer_now_ms(void){
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000 + (uint64_t)ts.tv_nsec / 1000000;
}

void hal_timer_sleep_ms(uint32_t ms){
    struct timespec ts;
    ts.tv_sec = ms / 1000;
    ts.tv_nsec = (ms%1000) * 1000000;
    nanosleep(&ts, NULL);
}