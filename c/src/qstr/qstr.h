#ifndef QSTR_H
#define QSTR_H

// qstr.h

#include <stddef.h>

struct qstr {
    size_t length;
    size_t capacity;
    char *data;
};

/*
 * Default capacity of a newly allocated empty qstr.
 */
static size_t QSTR_DEFAULT_CAPACITY = 8;

/*
 * Returns a pointer to a newly allocated empty qstr.
 * Returns a null pointer if the qstr cannot be allocated.
 */
struct qstr *qstr_new();

/*
 * Returns a pointer to a newly allocated qstr containing the characters
 * copied from a C-style string.
 * Returns an empty qstr if s is NULL.
 * Returns a null pointer if the qstr cannot be allocated.
 */
struct qstr *qstr_fromcstr(const char *s);

/*
 * Returns a pointer to a newly allocated qstr containing the characters
 * copied from another qstr s. 
 * Returns an empty qstr if s is NULL.
 * Returns a null pointer if the qstr cannot be allocated.
 */
struct qstr *qstr_copy(const struct qstr *s);

/*
 * Clears the specified qstr setting its length to 0. Returns s.
 * Returns a null pointer if s is NULL.
 */
struct qstr *qstr_clear(struct qstr *s);

/*
 * Checked character access by index.
 * Returns a pointer to the character at the specified index of the specified qstr.
 * index must satisfy the inequality 0 <= index < s->length
 * Returns a null pointer if s is NULL.
 * Returns a null pointer if the index is invalid.
 */
char *qstr_get(const struct qstr *s, size_t index);

/*
 * Checked character modification by index.
 * Sets the character at the specified index of the specified qstr to
 * the specified character.
 * Returns a pointer to the character at the specified index of the specified qstr.
 * index must satisfy the inequality 0 <= index < s->length
 * Returns a null pointer if s is NULL.
 * Returns a null pointer if the index is invalid.
 */
char *qstr_set(const struct qstr *s, size_t index, char c);

/*
 * Assigns the value of the qstr rhs to the qstr lhs by copying the
 * length and characters of rhs into lhs. Returns lhs.
 * lhs remains unchanged if rhs is NULL.
 * Returns a null pointer if lhs is NULL.
 */
struct qstr *qstr_assign(struct qstr *lhs, const struct qstr *rhs);

/*
 * Concatenates the characters of the qstr rhs to the end of lhs.
 * The capacity of lhs is increased if necessary. Returns lhs.
 * lhs remains unchanged if rhs is NULL.
 * Returns a null pointer if lhs is NULL.
 * Returns a null pointer if the qstr cannot be allocated.
 */
struct qstr *qstr_concat(struct qstr *lhs, const struct qstr *rhs);

/*
 * Checked substring removal by range.
 * Removes a range of characters from s starting at index start going
 * up to but not including index stop.
 * start and stop must satisfy 0 <= start <= stop <= s->length
 * Returns a null pointer if s is NULL.
 * Returns a null pointer if start and/or stop are invalid.
 */
struct qstr *qstr_remrange(struct qstr *s, size_t start, size_t stop);

/*
 * Deallocates memory allocated for the struct pointed at by s. Both s
 * and its data buffer are deallocated.
 * Does nothing if s is NULL.
 */
void qstr_destroy(struct qstr *s);

#endif