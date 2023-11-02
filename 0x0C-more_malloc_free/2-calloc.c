#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: elements number in the array
 * @size: element size
 * Return: ptr to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
			_memset(ptr, 0, nmemb * size);
			return (ptr);
}

/**
 * _memset - fills memory with constant bytes
 * @s: region of memory to be filled
 * @b: character to be copied
 * @n: number of times for b to be copied
 *
 * Return: ptr to memory region
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
