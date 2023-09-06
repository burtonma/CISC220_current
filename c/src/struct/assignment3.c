// assignment3.c

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct course_info {
    char code[16];
    char *title;      // title dynamically allocated
};

int main(void) {
    struct course_info c = {"CISC220A"};
    c.title = malloc(32);
    strcpy(c.title, "System level programming");
    
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
    
    // c.code does not change
    // string pointed at by c.title changes
    printf("c = %s: %s\n", c.code, c.title);
    
    return 0;
}

