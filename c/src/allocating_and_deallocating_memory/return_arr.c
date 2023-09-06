// return_arr.c

#include <stdio.h>
#include <stdlib.h>

int* intarray(size_t len) {
    if (len == 0) {
        len = 1;
    }
    int *arr = malloc(len);              // lifetime of array pointed at by arr starts here
    arr[0] = -99;
    return arr;
}

int main(void) {
    int *a = intarray(10);
    printf("a[0] = %d\n", a[0]);
    free(a);                             // lifetime of array ends here
    return 0;
}

