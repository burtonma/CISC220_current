// return_arr2.c

#include <stdio.h>
#include <stdlib.h>

// Caller passes a pointer to a pointer that stores the result of malloc
void intarray(size_t len, int **arr) {
    if (len == 0) {
        len = 1;
    }
    int *buf = malloc(len);              // lifetime of array pointed at by arr starts here
    buf[0] = -99;                        // write in a test value for illustration purposes
    *arr = buf;
}

int main(void) {
    int *a;
    intarray(10, &a);
    printf("a[0] = %d\n", a[0]);
    free(a);                             // lifetime of array ends here
    return 0;
}

