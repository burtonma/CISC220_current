// declare1.c

#include <stdio.h>

int main(void) {
    int x[3];       // an array of 3 ints, elements are not initialized
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", x[i]);
    }
    
    return 0;
}

