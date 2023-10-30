#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: the inter input
 * @av: the double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int h, j, g = 0, m = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (h = 0; h < ac; h++)
	{
		for (j = 0; av[h][j]; j++)
			m++;
	}
	m += ac;
	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);
	for (h = 0; h < ac; h++)
	{
		for (j = 0; av[h][j]; j++)
		{
			str[g] = av[h][j];
			g++;
		}
		if (str[g] == '\0')
		{
			str[g++] = '\n';
		}
	}
	return (str);
}
