#ifndef BLOCK_H
#define BLOCK_H

#include <stddef.h>
#include <stdint.h>

#define BLOCK_SECTOR_SIZE 512

typedef struct{
    int fd;
} block_dev_t;

int block_open(block_dev_t *dev, const char *path);
void block_close(block_dev_t *dev);
int block_read(block_dev_t *dev, uint32_t sector, void *buf);
int block_write(block_dev_t *dev, uint32_t sector, const void *buf);

#endif