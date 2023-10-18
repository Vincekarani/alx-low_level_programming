#include "main.h"
/**
 * cap_string - capitalizes chars in a string following a separator
 * @c: character string pointer
 * Return: char pointer
 */
char *cap_string(char *c)
{
	int m = 0, n,
	    sep[] = {32, '\t', 11, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	if (c[0] > 96 && c[0] < 123)
		c[0] -= 32;
	while (c[m] != '\0')
	{
		if (c[m] > 96 && c[m] < 123)
		{
			n = 0;
			while (m < 14)
			{
				if (c[m - 1] == sep[j])
				{
					c[m] -= 32;
					break;
				}
				n++;
			}
		}
		m++;
	}
	return (c);
}
