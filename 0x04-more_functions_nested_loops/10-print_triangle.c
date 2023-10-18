#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int q, r;

		for (q = 1; q <= size; q++)
		{
			for (r = q; r < size; r++)
			{
				_putchar(' ');
			}
			for (r = 1; r <= q; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

