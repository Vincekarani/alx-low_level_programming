#include "main.h"

/**
 * * *_memset - fills memory with a constant size
 * @s: memory site
 * @b: char value
 * @n: size of b
 * Return: pointer to the memory site
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

