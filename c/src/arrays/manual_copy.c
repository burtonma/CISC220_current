// manual_copy.c

#include <stdio.h>

int main(void) {
    int x[] = {1, 2, 3};
    int y[] = {10, 11, 12};
    
    for (int i = 0; i < 3; i++) {
        x[i] = y[i];
    }
    for (int i = 0; i < 3; i++) {
        printf("%d\n", x[i]);
    }
    
    return 0;
}

