#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int v, u;

		for (v = 0; v < size; v++)
		{
			for (u = 0; u < size; u++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
