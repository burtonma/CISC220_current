// memmove.c

#include <stdio.h>
#include <string.h>

void print_iarr(const int *a, size_t n) {
    printf("%d", a[0]);
    for (size_t i = 1; i < n; i++) {
        printf(", %d", a[i]);
    }
}


int main(void) {
    
    int x[] = {1, 2, 3, 4, 5, 6};
    
    printf("before : ");
    print_iarr(x, 6);
    printf("\n");

    size_t index = 4;
    int *dest = x + index;
    int *src = dest + 1;
    size_t count = 6 - index - 1;
    memmove(dest, src, count * sizeof(int));
    
    printf("after  : ");
    print_iarr(x, 6);
    printf("\n");
    
    return 0;
}

