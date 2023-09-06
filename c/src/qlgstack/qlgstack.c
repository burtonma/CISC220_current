// qlgstack.c

#include <stdlib.h>
#include <stdio.h>
#include "qlgstack.h"

struct node {
    void *elem;
    struct node *next;
};

struct qlgstack_tag {
    struct node *top;
    size_t size;
};

qlgstack *qlgstack_new() {
    qlgstack *s = malloc(sizeof(qlgstack));
    if (!s) {
        return NULL;
    }
    s->top = NULL;
    s->size = 0;
    return s;
}

bool qlgstack_is_empty(const qlgstack *s) {
    return s->size == 0;
}

size_t qlgstack_size(const qlgstack *s) {
    return s->size;
}

qlgstack *qlgstack_push(qlgstack *s, void *elem) {
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

qlgstack *qlgstack_pop(qlgstack *s, void **popped) {
    if (!s) {
        return NULL;
    }
    struct node *oldtop = s->top;
    void *elem = oldtop->elem;
    s->top = oldtop->next;
    s->size--;
    free(oldtop);
    if (popped) {
        *popped = elem;
    }
    return s;
}

void print_default_elem(const void *elem) {
    printf("?");
}

void qlgstack_print(const char *pre, const qlgstack *s, const char *post,
                    qlgstack_print_func ptr) {
    if (!ptr) {
        ptr = print_default_elem;;
    }
    if (pre) {
        printf("%s", pre);
    }
    printf("top : ");
    if (!qlgstack_is_empty(s)) {
        struct node *n = s->top;
        ptr(n->elem);
        n = n->next;
        while (n) {
            printf(", ");
            ptr(n->elem);
            n = n->next;
        }
    }
    printf(" : bottom");
    if (post) {
        printf("%s", post);
    }
}

void qlgstack_free(qlgstack *s,
                    qlgstack_free_func ptr) {
    if (!s) {
        return;
    }
    // free all nodes
    struct node *n = s->top;
    while (n) {
        struct node *next = n->next;
        if (ptr) {
            ptr(n->elem);
        }
        free(n);
        n = next;
    }
    // free the stack
    free(s);
}