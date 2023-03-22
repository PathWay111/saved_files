#ifndef FUNCTIONS_POINTERS_H
#define FUNCTIONS_POINTERS_H

#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *)); 	
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif
