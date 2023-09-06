// declare2.c

#include <stdio.h>

int main(void) {
    int x[3];       // an array of 3 ints, elements are not initialized

    for (int i = 0; i < 3; i++) {
        printf("%d\n", x[i]);
    }
    
    return 0;
}
