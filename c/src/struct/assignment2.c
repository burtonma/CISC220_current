// assignment2.c

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct course_info {
    char code[16];
    char title[256];
};

int main(void) {
    struct course_info c = {"CISC220A", "System level programming"};
    printf("c = %s: %s\n", c.code, c.title);
    
    struct course_info i = c;
    
    // change A to B in i.code
    i.code[7] = 'B';
    
    // make i.title all caps
    char *letter = i.title;
    while (*letter) {
        *letter = toupper(*letter);
        letter++;
    }
    printf("i = %s: %s\n", i.code, i.title);
    
    // c unchanged
    printf("c = %s: %s\n", c.code, c.title);
    
    return 0;
}

