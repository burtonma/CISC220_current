// not.c

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
    uint8_t x = 18;  // 0b00010010 
    uint8_t y = ~x;
    
    printf("    x : ");
    printb(x);
    printf("NOT x : ");
    printb(y);
    
    return 0;
}

