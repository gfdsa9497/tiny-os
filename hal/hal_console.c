#include "hal_console.h"
#include <unistd.h>
#include <string.h>

void hal_console_write(const char *buf, size_t len){
    write(STDOUT_FILENO, buf, len);
}

int hal_console_read(char *buf, size_t len){
    return (int)read(STDIN_FILENO, buf, len);
}

void hal_console_puts(const char *str){
    hal_console_write(str, strlen(str));
}