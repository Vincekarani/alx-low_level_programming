#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
		int x, z, m, len, f, digit;

		x = 0;
		z = 0;
		m = 0;
		len = 0;
		f = 0;
		digit = 0;
		while (s[len] != '\0')
			len++;

		while (x < len && f == 0)
		{
			if (s[x] == '-')
				++z;

			if (s[x] >= '0' && s[x] <= '9')
			{
				digit = s[x] - '0';
				if (z % 2)
					digit = -digit;
				m = m * 10 + digit;
				f = 1;
				if (s[x + 1] < '0' || s[x + 1] > '9')
					break;
				f = 0;
			}
			x++;
		}

		if (f == 0)
			return (0);

		return (m);
}
