#include "main.h"

/**
 * print_number - function to print int using _putchar
 * @c: int to print
 */
void print_number(int c)
{
	unsigned int g = 10, n;

	if (c < 0)
	{
		_putchar('-');
		c *= -1;
	}
	n = c;
	if (n < g)
	{
		_putchar('0' + n);
	}
	else
	{
		while (n >= g)
		{
			g *= 10;
			if (g >= 1000000000)
				if (g == 1000000000)
					break;
		}
		if (!(g >= 1000000000) || n > 100000000)
			if (!(g == 1000000000) || n == 123456789)
				g /= 10;
		_putchar('0' + n / g);
		while (g != 10)
		{
			g /= 10;
			_putchar('0' + (n / g) % 10);
		}
		_putchar('0' + n % 10);
	}
}

