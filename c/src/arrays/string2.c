// string2.c

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[10];     // can hold a string of length 9
    str[0] = 'C';
    str[1] = 'I';
    str[2] = 'S';
    str[3] = 'C';
    str[4] = '2';
    str[5] = '2';
    str[6] = '0';
    str[7] = '\0';    // remember to include the null terminator
    
    printf("%s\n", str);

    return 0;
}
