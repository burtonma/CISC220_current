// init1.c

#include <stdio.h>

int main(void) {
    int x[] = {1, 2, 3};     // initializes an array of capacity 3

    for (int i = 0; i < 3; i++) {
        printf("%d\n", x[i]);
    }
    
    return 0;
}
