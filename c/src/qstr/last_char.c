// last_char.c

#include <stdio.h>

#include "qstr.h"

int main(void) {
    struct qstr *str = qstr_fromcstr("HELLO");
    str->data[str->length - 1] = 'o';
    puts(str->data);

    return 0;
}