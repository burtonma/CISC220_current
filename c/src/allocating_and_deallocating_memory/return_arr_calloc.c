// return_arr_calloc.c

#include <stdio.h>
#include <stdlib.h>

// Returns a pointer to the first element of an array of unsigned int having capacity len
unsigned int* uintarray(size_t len) {
    if (len == 0) {
        len = 1;
    }
    unsigned int *arr = calloc(len, sizeof(unsigned int));  // lifetime of array pointed at by arr starts here
    return arr;
}

int main(void) {
    unsigned int *a = uintarray(10);
    printf("a[0] = %u\n", a[0]);         // guaranteed to be zero
    free(a);                             // lifetime of array ends here
    return 0;
}

