#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_iterator - func that executes func given parameter of the elemets
 *@array: array
 *@size: how many element to prints
 *@action: pointer to print in regular
 *Return: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
