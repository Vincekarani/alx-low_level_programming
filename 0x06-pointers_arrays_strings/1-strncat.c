#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of chars to copy
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k, l;
	for (k = 0; k < n; k++)
	{
		if (src[k] == '\0')
		{
			for (l = k; l < n && dest[l] != '\0'; l++)
				dest[l] = '\0';
			break;
		}
		dest[k] = src[k];
	}
	return (dest);}

