// concat.c

#include <stdio.h>
#include <string.h>

int main(void) {
    // change 11 to a smaller value to see what happens when dest is too small
    char s[11] = "01234";   
    char t[] = "56789";
    
    // concatenate s and t
    // size of s must be big enough
    // to hold the final string plus
    // the null terminator
    strcat(s, t);
    printf("s = %s\n", s);
    
    return 0;
}

