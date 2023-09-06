// indexes.c

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "CISC220";
    
    char *first = strchr(str, 'C');
    char *last = strrchr(str, 'C');
    
    ptrdiff_t i_first = first - str;
    ptrdiff_t i_last = last - str;
    
    printf("index of first C = %td\n", i_first);
    printf("index of last C  = %td\n", i_last);
    
    // change C to c
    *first = 'c';
    *last = 'c';
    printf("%s\n", str);
    
    return 0;
}

