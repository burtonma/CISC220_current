// sum_of.c

#include <stdio.h>

unsigned long sum_of(unsigned int n) {
    unsigned long sum;                        // uh-oh, uninitialized block scope variable
    for (unsigned int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    for (int i = 1; i < 10; i++) {
        unsigned long s = sum_of(i);
        printf("sum_of(%d) = %lu\n", i, s);
    }
    
    return 0;
} 
