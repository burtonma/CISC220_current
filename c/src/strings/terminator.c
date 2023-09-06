#include <stdio.h>

int main(void) {
    char zero = '0';
    char terminator = '\0';
    printf("The numeric value of \'0\' is %d\n", zero);
    printf("The numeric value of \'\\0\' is %d\n", terminator);
    
    return 0;
}

