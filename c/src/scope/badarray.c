#include <stdio.h>

int* intarray(size_t len) {
    if (len == 0) {
        len = 1;
    }
    int arr[len];
    return arr;
}

int main(void) {
    int *a = intarray(10);
    printf("a[0] = %d\n", a[0]);
    
    return 0;
}

