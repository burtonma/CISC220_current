// abs.c

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int val1 = -3;
    long int val2 = INT_MIN - 1L;                      // overflows on Win64
    long long int val3 = LONG_MIN - 1LL;               // overlows on Linux and Mac
    
    printf("abs(%d) = %d\n", val1, abs(val1));
    printf("abs(%ld) = %ld\n", val2, labs(val2));
    printf("abs(%lld) = %lld\n", val3, llabs(val3));
    
    return 0;
}
