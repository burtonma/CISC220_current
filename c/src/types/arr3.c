// arr3.c

#include <stdio.h>

int main(void) {
    int arr1[5] = { -9, -9, -9, -9, -9 };
    printf("arr1[0]   : %d\n", arr1[0]);             // -9
    
    int x[3];       // an array of 3 ints
    
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;       // no error?
 
    printf("sizeof(x) : %ld\n", sizeof(x));
    printf("capacity  : %ld\n", sizeof(x) / sizeof(int));
    
    printf("arr1[0]   : %d\n", arr1[0]);             // not -9 on the author's computer
    
    return 0;
}
