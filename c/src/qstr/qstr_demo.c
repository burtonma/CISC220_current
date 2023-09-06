#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include "qstr.h"

void print(const char *pre, const struct qstr *q) {
    if (pre) {
        printf("%s : length = %lu, capacity = %lu, data = %s\n", 
                pre, q->length, q->capacity, q->data);
    }
    else  {
        printf("length = %lu, capacity = %lu, data = %s\n", 
                q->length, q->capacity, q->data);
    }
}

int main(void) {
    struct qstr *q = qstr_new();
    print("q", q);
    qstr_destroy(q);

    q = qstr_fromcstr("CISC220");
    print("q", q);

    struct qstr *q2 = qstr_copy(q);
    print("q", q);
    print("q2", q2);

    qstr_clear(q2);
    print("q", q);
    print("q2", q2);

    for (size_t i = 0; i < q->length; i++) {
        char *c = qstr_get(q, i);
        printf("char : %c\n", *c);
    }
    print("q", q);

    for (size_t i = 0; i < q->length; i++) {
        char *c = qstr_set(q, i, tolower(*qstr_get(q, i)));
        printf("char : %c\n", *c);
    }
    print("q", q);

    qstr_assign(q2, q);
    print("q", q);
    print("q2", q2);

    for (size_t i = 0; i < q->length; i++) {
        char *c = qstr_set(q, i, toupper(*qstr_get(q, i)));
    }
    print("q", q);
    print("q2", q2);

    qstr_concat(q2, q);
    print("q", q);
    print("q2", q2);

    qstr_concat(q2, q2);
    print("q2", q2);

    struct qstr *q3 = qstr_copy(q);
    for (size_t i = 0; i <= q->length; i++) {
        qstr_assign(q3, q);
        qstr_remrange(q3, i, q3->length);
        print("q3", q3);
    }

    qstr_destroy(q);
    qstr_destroy(q2);
    qstr_destroy(q3);

    return 0;
}