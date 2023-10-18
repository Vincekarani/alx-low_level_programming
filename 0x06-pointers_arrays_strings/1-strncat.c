#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, w;

	l = 0;
	w = 0;

	while (*(dest + l) != '\0')
		l++;

	while (*(src + w) != '\0' && l < 97 && l < n)
	{
		*(dest + l) = *(src + w);
		l++;
		w++;
	}
	*(dest + l) = '\0';
	return (dest);
}
