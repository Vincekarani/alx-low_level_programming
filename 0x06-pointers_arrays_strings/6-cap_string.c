#include "main.h"

/**
 * cap_string - capitalizes chars in a string following a separator
 * @c: character string pointer
 * Return: char pointer
 */
char *cap_string(char *c)
{
	int k = 0, l,
	    sep[] = {32, '\t', 11, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (c[0] > 96 && c[0] < 123)
		c[0] -= 32;
	while (c[k] != '\0')
	{
		if (c[k] > 96 && c[k] < 123)
		{
			l = 0;
			while (l < 14)
			{
				if (c[k - 1] == sep[l])
				{
					c[k] -= 32;
					break;
				}
				l++;
			}
		}
		k++;
	}
	return (c);
}
