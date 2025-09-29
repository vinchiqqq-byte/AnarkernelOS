#pragma once

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

uint8_t inb(uint16_t port) {
    uint8_t result;
    __asm__ volatile ("inb %1, %0" 
                      : "=a"(result) 
                      : "Nd"(port));
    return result;
}

void outb(uint16_t port, uint8_t value) {
    __asm__ volatile ("outb %0, %1" 
                      : 
                      : "a"(value), "Nd"(port));
}

#ifdef __cplusplus
}
#endif