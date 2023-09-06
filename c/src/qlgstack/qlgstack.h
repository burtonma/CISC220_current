#ifndef qlgstack_H
#define qlgstack_H

#include <stdbool.h>

/*
 * qlgstack is the alias for the generic stack type.
 */
typedef struct qlgstack_tag qlgstack;

/*
 * qlgstack_print_func is the alias for a pointer to a function that
 * prints an element pointed at by elem.
 */
typedef void (*qlgstack_print_func)(const void *elem);

/*
 * qlgstack_free_func is the alias for a pointer to a function that
 * deallocates memory used by an element pointed at by elem.
 */
typedef void (*qlgstack_free_func)(void *elem);

/*
 * Returns a pointer to a newly allocated stack.
 * Returns a null pointer if the stack cannot be allocated.
 */
qlgstack *qlgstack_new();

/*
 * Returns true if s points at an empty stack, false otherwise.
 * Undefined behavior if s is a null pointer.
 */
bool qlgstack_is_empty(const qlgstack *s);

/*
 * Returns the number of elements in the stack pointed at by s.
 * Undefined behavior if s is a null pointer.
 */
size_t qlgstack_size(const qlgstack *s);

/*
 * Pushes a pointer to the specified element onto the top of the stack pointed
 * at by s.
 * Returns s, or a null pointer if s is a null pointer.
 */
qlgstack *qlgstack_push(qlgstack *s, void *elem);

/*
 * Pops the top element off the top of the stack pointed
 * at by s. If popped is not null then a pointer to the popped element is written
 * into the object pointed at by popped.
 * Returns s, or a null pointer if s is a null pointer.
 */
qlgstack *qlgstack_pop(qlgstack *s, void **popped);

/*
 * Prints a representation of the specified stack to standard out
 * with an optional preamble and postscript. Each element is printed
 * using the function pointed at by ptr.
 * If pre is not null, then the string pre is printed before the
 * stack representation.
 * If post is not null, then the string post is printed after the
 * stack representation.
 * If ptr is null then each element is printed as a question mark.
 * Undefined behavior if s is a null pointer.
 */
void qlgstack_print(const char *pre, const qlgstack *s, const char *post,
                    qlgstack_print_func ptr);

/*
 * Deallocates memory allocated for the stack pointed at by s.
 * If ptr is not NULL, then memory for each element is deallocated by
 * calling the function pointed at by ptr.
 * Does nothing if s is NULL.
 */
void qlgstack_free(qlgstack *s,
                    qlgstack_free_func ptr);

#endif // qlgstack_H