#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "qstr.h"

/*
 * Allocates a new struct qstr object having length 0.
 * Returns a pointer to the new object, or NULL if allocation fails.
 */
struct qstr *qstr_alloc(size_t capacity) {
    struct qstr *q = malloc(sizeof(struct qstr));
    if (!q) {
        fprintf(stderr, "qstr allocation error");
        return NULL;
    }
    if (capacity == 0) {
        capacity = 1;
    }
    char *buf = calloc(capacity, 1);
    if (!buf) {
        free(q);
        fprintf(stderr, "qstr->data allocation error");
        return NULL;
    }
    q->length = 0;
    q->capacity = capacity;
    q->data = buf;
    return q;
}


/*
 * Ensures that the object pointed at by s has at least the
 * specified capacity in its data array, reallocating the data
 * array if required.
 * Returns s, or NULL if reallocation failed.
 */
struct qstr *qstr_ensure_capacity(struct qstr *s, size_t capacity) {
    if (s->capacity >= capacity) {
        return s;
    }
    char *buf = realloc(s->data, capacity);
    if (!buf) {
        fprintf(stderr, "qstr->data reallocation error");
        return NULL;
    }
    s->data = buf;
    s->capacity = capacity;
    return s;
}


struct qstr *qstr_new() {
    return qstr_alloc(QSTR_DEFAULT_CAPACITY);
}

struct qstr *qstr_fromcstr(const char *s) {
    size_t len = strlen(s);
    struct qstr *q = qstr_alloc(len + 1);
    if (q) {
        q->length = len;
        strcpy(q->data, s);
    }
    return q;
}

struct qstr *qstr_copy(const struct qstr *s) {
    if (!s) {
        return qstr_new();
    }
    struct qstr *q = qstr_alloc(s->capacity);
    if (q) {
        qstr_assign(q, s);
    }
    return q;
}

struct qstr *qstr_clear(struct qstr *s) {
    if (!s) {
        return NULL;
    }
    s->data[0] = '\0';
    s->length = 0;
    return s;
}

char *qstr_get(const struct qstr *s, size_t index) {
    if (!s || index >= s->length) {
        return NULL;
    }
    return s->data + index;
}

char *qstr_set(const struct qstr *s, size_t index, char c) {
    char *res = qstr_get(s, index);
    if (!res) {
        return NULL;
    }
    s->data[index] = c;
    return res;
}

struct qstr *qstr_assign(struct qstr *lhs, const struct qstr *rhs) {
    if (!lhs) {
        return NULL;
    }
    if (!rhs || lhs == rhs) {
        return lhs;
    }
    const size_t REQ_CAPACITY = rhs->length + 1;
    struct qstr *tmp = qstr_ensure_capacity(lhs, REQ_CAPACITY);
    if (!tmp) {
        return NULL;
    }
    
    // bug, qstr can contain \0
    // strcpy(lhs->data, rhs->data);
    memcpy(lhs->data, rhs->data, rhs->length + 1);
    lhs->length = rhs->length;
    return lhs;
}

struct qstr *qstr_concat(struct qstr *lhs, const struct qstr *rhs) {
    if (!lhs) {
        return NULL;
    }
    if (!rhs) {
        return lhs;
    }
    const size_t REQ_CAPACITY = lhs->length + rhs->length + 1;
    struct qstr *tmp = qstr_ensure_capacity(lhs, REQ_CAPACITY);
    if (!tmp) {
        return NULL;
    }
    
    // must use memmove here, can you see why?
    memmove(lhs->data + lhs->length, rhs->data, rhs->length + 1);
    lhs->length = lhs->length + rhs->length;
    return lhs;
}

struct qstr *qstr_remrange(struct qstr *s, size_t start, size_t stop) {
    if (!s || start > stop || stop > s->length) {
        return NULL;
    }
    size_t n_removed = stop - start;
    size_t n_tomove = s->length - stop + 1;
    memmove(s->data + start, s->data + stop, n_tomove);
    s->length -= n_removed;
    return s;
}

void qstr_destroy(struct qstr *s) {
    if (!s) {
        return;
    }
    free(s->data);
    s->length = 0;
    s->capacity = 0;
    s->data = NULL;
    free(s);
}