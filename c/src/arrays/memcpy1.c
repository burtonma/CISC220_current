// memcpy1.c

#include <stdio.h>

int main(void) {
    int x[] = {1, 2, 3};
    int y[] = {10, 11, 12};
    
    int *src = &y[0];                   // pointer to first element of y
    int *dest = &x[0];                  // pointer to first element of x
    memcpy(dest, src, 3 * sizeof(int));
    
    for (int i = 0; i < 3; i++) {
        printf("%d\n", x[i]);
    }
    
    return 0;
}

