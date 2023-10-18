#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int v, u;

		for (v = 0; v < n; v++)
		{
			for (u = 0; u < n; u++)
			{
				if (u == v)
					_putchar('\\');
				else if (u < v)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

