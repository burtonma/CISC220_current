// max.c

#include <stdio.h>

// Returns the maximum value in the array a having count elements.
// The index of the maximum element is stored in the object pointed at
// by index.
int max(int a[], size_t count, size_t *index) {
    int hi = a[0];
    size_t i_hi = 0;
    for (size_t i = 1; i < count; i++) {
        if (a[i] > hi) {
            hi = a[i];
            i_hi = i;
        }
    }
    *index = i_hi;
    return hi;
}

int main(void) {
    int arr[] = { 6, 3, 1, 8, 7, 9, 4, 2, 5 };
    
    // must declare a variable to store the index in
    size_t i;
    int big = max(arr, 9, &i);
    
    printf("max = %d, index = %lu\n", big, i);
    
    return 0;
}
