#include <stdlib.h>
#include "main.h"

/**
 * * *array_range - creates an array of integers
 * @min: minimum values' range stored
 * @max: maximum values' range stored and elements' number
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
		int *ptr, v, size;

		if (min > max)
			return (NULL);
		size = max - min + 1;
		ptr = malloc(sizeof(int) * size);
		if (ptr == NULL)
			return (NULL);
		for (v = 0; min <= max; v++)
			ptr[v] = min++;
		return (ptr);
}
