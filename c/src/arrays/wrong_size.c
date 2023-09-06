// wrong_size.c

#include <stdio.h>

void f(int arr[]) {
    size_t len = sizeof(arr) / sizeof(int);
    printf("calculated length = %zi\n", len);
}

int main(void) {
    int x[100];      // array length 100
    f(x);
    
    return 0;
}

