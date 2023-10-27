#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: bytes number of str to concatenate
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int f, g;

	f = 0;
	g = 0;
	while (dest[f] != '\0')
		f++;
	while (src[g] != '\0' && g < n)
	{
		dest[f] = src[g];
		f++;
		g++;
	}
	dest[f] = '\0';
	return (dest);
}

