#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: the first input to concat
 * @s2: the second input to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int f, v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	f = v = 0;
	while (s1[f] != '\0')
		f++;
	while (s2[v] != '\0')
		v++;
	concat = malloc(sizeof(char) * (f + v + 1));
	if (concat == NULL)
		return (NULL);
	f = v = 0;
	while (s1[f] != '\0')
	{
		concat[f] = s1[f];
		f++;
	}
	while (s2[v] != '\0')
	{
		concat[f] = s2[v];
		f++, v++;
	}
	concat[f] = '\0';
	return (concat);
}
