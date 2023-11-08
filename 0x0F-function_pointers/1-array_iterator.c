#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as  parameter on elements' array.
 * @array: array
 * @size: number or elements to print
 * @action: pointer to a function to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);;
	}
}

