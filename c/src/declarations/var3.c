// var3.c (does not compile)

#include <stdio.h>

int main(void) {
    const int x = 1;        // x is the constant 1
    
    const int y;
    y = 2;                  // oops, attempted assignment to const int
    
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}
