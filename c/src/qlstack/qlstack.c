// qlstack.c

#include <stdlib.h>
#include <stdio.h>
#include "qlstack.h"

struct node {
    int elem;
    struct node *next;
};

struct qlstack_tag {
    struct node *top;
    size_t size;
};

qlstack *qlstack_new() {
    qlstack *s = malloc(sizeof(qlstack));
    if (!s) {
        return NULL;
    }
    s->top = NULL;
    s->size = 0;
    return s;
}

bool qlstack_is_empty(const qlstack *s) {
    return s->size == 0;
}

size_t qlstack_size(const qlstack *s) {
    return s->size;
}

qlstack *qlstack_push(qlstack *s, int elem) {
    if (!s) {
        return NULL;
    }
    struct node *n = malloc(sizeof(struct node));
    if (!n) {
        return NULL;
    }
    n->elem = elem;
    n->next = s->top;
    s->top = n;
    s->size++;
    return s;
}

qlstack *qlstack_pop(qlstack *s, int *popped) {
    if (!s) {
        return NULL;
    }
    struct node *oldtop = s->top;
    int elem = oldtop->elem;
    s->top = oldtop->next;
    s->size--;
    free(oldtop);
    if (popped) {
        *popped = elem;
    }
    return s;
}

void qlstack_print(const char *pre, const qlstack *s, const char *post) {
    if (pre) {
        printf("%s", pre);
    }
    printf("top : ");
    if (!qlstack_is_empty(s)) {
        struct node *n = s->top;
        printf("%d", n->elem);
        n = n->next;
        while (n) {
            printf(", %d", n->elem);
            n = n->next;
        }
    }
    printf(" : bottom");
    if (post) {
        printf("%s", post);
    }
}

void qlstack_free(qlstack *s) {
    if (!s) {
        return;
    }
    // free all nodes
    struct node *n = s->top;
    while (n) {
        struct node *next = n->next;
        free(n);
        n = next;
    }
    // free the stack
    free(s);
}