// str2.c

#include <stdio.h>
#include <string.h>     // needed for strlen

int main(void) {
    char str[100] = "CISC220";
    
    printf("capacity      : %ld\n", sizeof(str) / sizeof(char));
    printf("string length : %ld\n", strlen(str));
    
    return 0;
}
