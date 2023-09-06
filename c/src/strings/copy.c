// copy.c

#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "01234";
    size_t len = strlen(src);
    
    // len+1 to make sure that there is space for the null terminator
    char dest1[len + 1];
    strcpy(dest1, src);
    printf("src   = %s\n", src);
    printf("dest1 = %s\n", dest1);
    
    // print the return value instead
    char dest2[len + 1];
    printf("dest2 = %s\n", strcpy(dest2, src));
    
    // copy into the middle of the destination array
    char dest3[] = "abcde-----";
    strcpy(dest3 + len, src);
    printf("dest3 = %s\n", dest3);
    
    // copy the end of a string into a destination array
    char *s = "CISC220";
    char dest4[4];
    strcpy(dest4, s + 4);
    printf("dest4 = %s\n", dest4);
    
    return 0;
}

