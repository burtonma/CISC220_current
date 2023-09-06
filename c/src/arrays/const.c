// const.c

#include <stdio.h>

int main(void) {
    const int x[3] = {1, 2, 3};    // initialization
    
    // ok, get the value of x[1]
    int val = x[1];
    printf("x[1] = %d\n", val);
    
    // UNCOMMENT NEXT LINE TO ATTEMPT TO ASSIGN TO x[1]
    // x[1] = 200;
    
    return 0;
}

