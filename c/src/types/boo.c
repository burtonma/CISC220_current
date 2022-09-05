// boo.c

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool flag = true;          // or any non-zero value
    if (flag) {
        puts("true");
    }
    else {
        puts("false");
    }
    return 0;
}
