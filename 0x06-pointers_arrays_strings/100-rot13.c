#include "main.h"

/**
 * rot13 - converts string to leet
 * @c: character string pointer
 * Return: char pointer
 */
char *rot13(char *c)
{
	int u;
	int v;
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm",
	alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (u = 0; c[u] != '\0'; u++)
	{
		for (v = 0; v < 52; v++)
		{
			if (alphabet[v] == c[u])
			{
				c[u] = rot_13[v];
				break;
			}
		}
	}
	return (c);
}
