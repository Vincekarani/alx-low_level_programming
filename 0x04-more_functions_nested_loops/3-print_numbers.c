#include "main.h"

/**
 * print_numbers - checks for a digit (0 upto 9).
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
