#include "main.h"
/**
 * _memcpy - copies memory site
 * @dest: copy destination site
 * @src: source of copy
 * @n: memory bytes to copy
 * Return: pointer (0)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
