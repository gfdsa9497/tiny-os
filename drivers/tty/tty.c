#include "tty.h"
#include "../../hal/hal_console.h"

void tty_write(const char *buf, size_t len){
    hal_console_write(buf, len);
}

int tty_read(char *buf, size_t len){
    return hal_console_read(buf, len);
}

void tty_puts(const char *str){
    hal_console_puts(str);
}