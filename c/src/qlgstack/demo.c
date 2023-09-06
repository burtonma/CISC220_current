#include <stdio.h>
#include <stdlib.h>
#include "qlgstack.h"

void print_int(const void *elem) {
    const int *val = elem;
    printf("%d", *val);
}

void free_int(void *elem) {
    free(elem);
}

int main(int argc, char *argv[]) {
    size_t n = argc - 1;
    qlgstack *q1 = qlgstack_new();
    qlgstack *q2 = qlgstack_new();

    for (size_t i = 0; i < n; i++) {
        int *val1 = malloc(sizeof(int));
        int *val2 = malloc(sizeof(int));
        *val1 = atoi(argv[i + 1]);
        *val2 = -*val1;
        if (!qlgstack_push(q1, val1)) {
            fprintf(stderr, "error pushing to q1\n");
            qlgstack_free(q1, free_int);
            exit(EXIT_FAILURE);
        }
        if (!qlgstack_push(q2, val2)) {
            fprintf(stderr, "error pushing to q2\n");
            qlgstack_free(q1, free_int);
            exit(EXIT_FAILURE);
        }
        qlgstack_print("q1 ", q1, "\n", print_int);
        qlgstack_print("q2 ", q2, "\n", print_int);
    }

    for (size_t i = 0; i < n; i++) {
        int *val1;
        int *val2;
        char pre[100];
        qlgstack_pop(q1, &val1);
        sprintf(pre, "popped %d, q1 ", *val1);
        qlgstack_print(pre, q1, "\n", print_int);
        
        qlgstack_pop(q2, &val2);
        sprintf(pre, "popped %d, q2 ", *val2);
        qlgstack_print(pre, q2, "\n", print_int);
    }

    qlgstack_free(q1, free_int);
    qlgstack_free(q2, free_int);

    return 0;
}