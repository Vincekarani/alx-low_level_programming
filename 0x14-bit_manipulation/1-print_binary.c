#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, check;
	char f;

	f = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		check = n & d;
		if (check == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
		{

			_putchar('0');
		}
		d >>= 1;
	}
}

/**
 * _pow - a function that calculates base ^ power
 * @base: exponential base
 * @power: exponential power
 *
 * Return: value of base ^ power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int count;
	unsigned int i;

	count = 1;
	for (i = 1; i <= power; i++)
		count *= base;
	return (count);
}
