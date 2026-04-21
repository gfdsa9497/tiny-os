#ifndef HAL_TIMER_H
#define HAL_TIMER_H

#include <stdint.h>

uint64_t hal_timer_now_ms(void);
void hal_timer_sleep_ms(uint32_t ms);

#endif