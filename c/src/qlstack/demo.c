#include <stdio.h>
#include <stdlib.h>
#include "qlstack.h"

int main(int argc, char *argv[]) {
    size_t n = argc - 1;
    qlstack *q1 = qlstack_new();
    qlstack *q2 = qlstack_new();

    for (size_t i = 0; i < n; i++) {
        int val1 = atoi(argv[i + 1]);
        int val2 = -val1;
        if (!qlstack_push(q1, val1)) {
            fprintf(stderr, "error pushing to q1\n");
            qlstack_free(q1);
            exit(EXIT_FAILURE);
        }
        if (!qlstack_push(q2, val2)) {
            fprintf(stderr, "error pushing to q2\n");
            qlstack_free(q1);
            exit(EXIT_FAILURE);
        }
        qlstack_print("q1 ", q1, "\n");
        qlstack_print("q2 ", q2, "\n");
    }

    for (size_t i = 0; i < n; i++) {
        int val1;
        int val2;
        char pre[100];
        qlstack_pop(q1, &val1);
        sprintf(pre, "popped %d, q1 ", val1);
        qlstack_print(pre, q1, "\n");
        
        qlstack_pop(q2, &val2);
        sprintf(pre, "popped %d, q2 ", val2);
        qlstack_print(pre, q2, "\n");
    }

    qlstack_free(q1);
    qlstack_free(q2);

    return 0;
}