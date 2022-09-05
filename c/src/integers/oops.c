// oops.c

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    signed char c = SCHAR_MIN;    // requires limits.h
    printf("%d\n", c);
    
    signed char x = -c;
    printf("%d\n", x);
    
    x = abs(c);                   // requires stdlib.h
    printf("%d\n", x);
    
    x = -1 * c;
    printf("%d\n", x);
    
    x = x / -1;
    printf("%d\n", x);
    
    return 0;
}
