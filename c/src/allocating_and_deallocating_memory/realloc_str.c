// realloc_str.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *str = malloc(5);
    strcpy(str, "CISC");
    printf("str = %s\n", str);
    
    char *tmp = realloc(str, 8);
    if (!tmp) {
        // realloc failed, clean up and exit
        free(str);
        exit(EXIT_FAILURE);
    }
    // tmp contains the characters in str
    printf("tmp = %s\n", tmp);
    
    // reassign str to point at reallocated block of memory
    str = tmp;
    
    // use the extra memory
    strcat(str, "220");
    printf("tmp = %s\n", tmp);
    
    // always free allocated memory when it is no longer needed
    free(str);
    
    return 0;
}

