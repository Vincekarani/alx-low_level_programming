#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: the character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int k, x = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;
	a = malloc(sizeof(char) * (k + 1));
	if (a == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		a[x] = str[x];
	return (a);
}
