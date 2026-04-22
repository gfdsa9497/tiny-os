#include "block.h"
#include <fcntl.h>
#include <unistd.h>

int block_open(block_dev_t *dev, const char *path) {
    dev->fd = open(path, O_RDWR | O_CREAT, 0644);
    return dev->fd < 0 ? -1 : 0;
}

void block_close(block_dev_t *dev){
    close(dev->fd);
    dev->fd = -1;
}

int block_read(block_dev_t *dev, uint32_t sector, void *buf){
    off_t offset = (off_t)sector * BLOCK_SECTOR_SIZE;
    if(lseek(dev->fd, offset, SEEK_SET) < 0) return -1;
    return (int)read(dev->fd, buf, BLOCK_SECTOR_SIZE);
}

int block_write(block_dev_t *dev, uint32_t sector, const void *buf){
    off_t offset = (off_t)sector * BLOCK_SECTOR_SIZE;
    if(lseek(dev->fd, offset, SEEK_SET) < 0) return -1;
    return (int)write(dev->fd, buf, BLOCK_SECTOR_SIZE);
}