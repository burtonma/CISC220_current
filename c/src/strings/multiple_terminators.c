// multiple_terminators.c

#include <stdio.h>

int main(void) {
    
    char s[] = {'a', 'b', 'c', '\0', 
                'd', 'e', 'f', '\0', 
                'g', 'h', 'i', '\0'};
    
    printf("s     = %s\n", s);
    printf("s + 4 = %s\n", s + 4);
    printf("s + 8 = %s\n", s + 8);
    
    return 0;
}

