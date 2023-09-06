// param.c

#include <stdio.h>

int max(const int arr[], size_t len) {
    int hi = arr[0];
    for (size_t i = 1; i < len; i++) {
        if (arr[i] > hi) {
            hi = arr[i];
        }
    }
    return hi;
}

int main(void) {
    int x[] = { -5, 5, 99, -13, 8 };
    int hi = max(x, 5);
    printf("max = %d\n", hi);
    
    return 0;
}

