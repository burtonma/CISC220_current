// init3.c

#include <stdio.h>

int main(void) {
    int x[] = {3};     // x[0] == 3, remaining elements uninitialzed

    for (int i = 0; i < 3; i++) {
        printf("%d\n", x[i]);
    }
    
    return 0;
}

