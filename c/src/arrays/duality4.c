// duality4.c

#include <stdio.h>
#include <string.h>

int main(void) {
    double arr[7] = { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
    double *p = &arr[3];                // pointer to fourth element of arr
    
    double elem = *(p + 2);             // same as arr[3 + 2]
    printf("elem = %f\n", elem);
    
    elem = *(p - 3);                    // same as arr[3 - 3]
    printf("elem = %f\n", elem);
    
    // change p[6]
    *(arr + 6) = -100.0;
    printf("arr[6] = %f\n", arr[6]);
    
    
    return 0;
}
