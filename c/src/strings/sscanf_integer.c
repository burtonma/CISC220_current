// sscanf_integer.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    // greater than INT_MAX for 32-bit int but less than LONG_MAX for 64-bit long
    char data[] = "3000000000";   
    
    // scan data for an int value and for a long value
    int i = 0;
    long j = 0;
    
    sscanf(data, "%d", &i);
    sscanf(data, "%ld", &j);
    
    printf("i = %d, j = %ld\n", i, j);
    
    return 0;
}

