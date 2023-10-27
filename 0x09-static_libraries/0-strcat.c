#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the string outcome
 */
char *_strcat(char *dest, char *src)
{
	int f, g;

	f = 0;
	g = 0;
	while (dest[f] != '\0')
		f++;
	while (src[g] != '\0')
	{
		dest[f] = src[g];
		g++;
		f++;
	}
	dest[f] = '\0';
	return (dest);
}
