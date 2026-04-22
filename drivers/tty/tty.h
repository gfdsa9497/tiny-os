#ifndef TTY_H
#define TTY_H

#include <stddef.h>

void tty_write(const char *buf, size_t len);
int tty_read(char *buf, size_t len);
void tty_puts(const char *str);

#endif