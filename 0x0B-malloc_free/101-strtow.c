#include <stdlib.h>
#include "main.h"
/**
 * **strtow - splits a string into words
 * @str: the string to be split
 *
 * Return: pointer to array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **mat, *temp;
	int h, m = 0, len = 0, words, d = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);
	for (h = 0; h <= len; h++)
	{
		if (str[h] == ' ' || str[h] == '\0')
		{
			if (d)
			{
				end = h;
				temp = (char *) malloc(sizeof(char) * (d + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				mat[m] = temp - d;
				m++;
				d = 0;
			}
		}
		else if (d++ == 0)
			start = h;
	}
	mat[m] = NULL;
	return (mat);
}
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to be evaluated
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int f, d, z;

	f = 0;
	z = 0;
	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			z++;
		}
	}
	return (z);
}

