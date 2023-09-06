#include <stdio.h>

char* hello() {
    char *s = "HELLO";
    return s;
}

int main(void) {
    char *str = hello();
    printf("%s\n", str);
    
    // UNCOMMENT NEXT LINE
    str[0] = 'h';
    
    return 0;
}

