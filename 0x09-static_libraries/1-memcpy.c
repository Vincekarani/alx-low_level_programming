#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: area of memory to copy from
 * @n: bytes number to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int f;

	for (f = 0; f < n; f++)
	{
		dest[f] = src[f];
	}
	return (dest);
}
