#ifndef QLSTACK_H
#define QLSTACK_H

#include <stdbool.h>

typedef struct qlstack_tag qlstack;

/*
 * Returns a pointer to a newly allocated stack.
 * Returns a null pointer if the stack cannot be allocated.
 */
qlstack *qlstack_new();

/*
 * Returns true if s points at an empty stack, false otherwise.
 * Undefined behavior if s is a null pointer.
 */
bool qlstack_is_empty(const qlstack *s);

/*
 * Returns the number of elements in the stack pointed at by s.
 * Undefined behavior if s is a null pointer.
 */
size_t qlstack_size(const qlstack *s);

/*
 * Pushes the specified element onto the top of the stack pointed
 * at by s.
 * Returns s, or a null pointer if s is a null pointer.
 */
qlstack *qlstack_push(qlstack *s, int elem);

/*
 * Pops the top element off the top of the stack pointed
 * at by s. If popped is not null then the popped element is written
 * into the object pointed at by popped.
 * Returns s, or a null pointer if s is a null pointer.
 */
qlstack *qlstack_pop(qlstack *s, int *popped);

/*
 * Prints a representation of the specified stack to standard out
 * with an optional preamble and postscript.
 * If pre is not null, then the string pre is printed before the
 * stack representation.
 * If post is not null, then the string post is printed after the
 * stack representation.
 * Undefined behavior if s is a null pointer.
 */
void qlstack_print(const char *pre, const qlstack *s, const char *post);

/*
 * Deallocates memory allocated for the stack pointed at by s.
 * Does nothing if s is NULL.
 */
void qlstack_free(qlstack *s);

#endif // QLSTACK_H