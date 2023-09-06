// copy_with_sprintf.c

#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "01234";
    size_t len = strlen(src);
    
    // len+1 to make sure that there is space for the null terminator
    char dest1[len + 1];
    int n = sprintf(dest1, "%s", src);
    printf("src   = %s\n", src);
    printf("dest1 = %s\n", dest1);
    printf("number of characters written = %d\n", n);
    
    // copy into the middle of the destination array
    char dest3[] = "abcde-----";
    n = sprintf(dest3 + len, "%s", src);
    printf("dest3 = %s\n", dest3);
    printf("number of characters written = %d\n", n);
    
    // copy the end of a string into a destination array
    char *s = "CISC220";
    char dest4[4];
    n = sprintf(dest4, "%s", s + 4);
    printf("dest4 = %s\n", dest4);
    printf("number of characters written = %d\n", n);
    
    return 0;
}

