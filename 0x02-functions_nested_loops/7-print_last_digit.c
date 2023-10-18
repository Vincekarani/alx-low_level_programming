#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @k: the int to extract the last digit
 * Return: value of the last digit
 */
int print_last_digit(int k)
{
	int b;

	if (k < 0)
		k = -k;
	b = k % 10;
	if (b < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
