#ifndef HAL_CONSOLE_H
#define HAL_CONSOLE_H

#include <stddef.h>

void hal_console_write(const char *buf, size_t len);
int hal_console_read(char *burf, size_t len);
void hal_console_puts(const char *str);


#endif