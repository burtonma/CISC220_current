// rshift_unsigned.c

#include <stdint.h>
#include <stdio.h>

void printb(uint8_t x) {
    char buf[9];
    for (size_t i = 0; i < 8; i++) {
        uint8_t y = x & (1 << i);
        buf[7 - i] = (y > 0) ? '1' : '0';
    }
    buf[8] = '\0';
    printf("%s\n", buf);
}

int main(void) {
    uint8_t x = 23;   // 0b00010111
    printf("x      = %3d = ", x);
    printb(x);
    
    uint8_t y = x >> 1;    // shift right once, does not change x
    printf("x >> 1 = %3d = ", y);
    printb(y);
    
    y = x >> 2;            // shift right twice, does not change x
    printf("x >> 2 = %3d = ", y);
    printb(y);
    
    y = x >> 3;            // shift right thrice, does not change x
    printf("x >> 3 = %3d = ", y);
    printb(y);
    
    y = x >> 4;            // shift right four times, does not change x
    printf("x >> 4 = %3d = ", y);
    printb(y);
    
    return 0;
}

