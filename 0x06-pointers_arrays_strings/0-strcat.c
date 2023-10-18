#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int l, w;

	l = 0;
	w = 0;

	while (*(dest + l) != '\0')
				l++;

	while (*(src + w) != '\0' && l < 97)
			
	{
		*(dest + l) = *(src + w);
		lengthD++;
		w++;
	}
	*(dest + l) = '\0';
	return (dest);
}
