// lshift_signed.c

#include <stdint.h>
#include <stdio.h>

void printb(int8_t x_signed) {
    uint8_t x = (uint8_t) x_signed;
    
    char buf[9];
    for (size_t i = 0; i < 8; i++) {
        uint8_t y = x & (1 << i);
        buf[7 - i] = (y > 0) ? '1' : '0';
    }
    buf[8] = '\0';
    printf("%s\n", buf);
}

int main(void) {
    int8_t x = -15;   // 0b11110001 in twos complement
    printf("x      = %4d = ", x);
    printb(x);
    
    int8_t y = x << 1;    // shift left once, does not change x
    printf("x << 1 = %4d = ", y);
    printb(y);
    
    y = x << 2;            // shift left twice, does not change x
    printf("x << 2 = %4d = ", y);
    printb(y);
    
    y = x << 3;            // shift left thrice, does not change x
    printf("x << 3 = %4d = ", y);
    printb(y);
    
    y = x << 4;            // shift left four times (overflows), does not change x
    printf("x << 4 = %4d = ", y);
    printb(y);
   
    return 0;
}

