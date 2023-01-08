// sum_of2.c

#include <stdio.h>

static unsigned int sum = 0;

unsigned long sum_of(unsigned int n) {
    for (unsigned int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    unsigned long s = sum_of(10);
    printf("sum_of(10) = %lu\n", s);
    
    return 0;
} 
