// duality3.c

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "CISC220";
    char copy[8];
    
    // already know that copy = str; does not work
    // can we cheat with a pointer?
    
    char *p = str;
    copy = p;
    
    return 0;
}

