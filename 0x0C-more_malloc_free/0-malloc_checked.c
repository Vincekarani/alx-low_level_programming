#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: memory size
 *
 * Return: a pointer to the newly allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	else
		return (p);
}
