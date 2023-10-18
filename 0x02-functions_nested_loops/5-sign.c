#include "main.h"
/**
 * print_sign -  a function that prints the sign of a number
 *
 * Descriprtion: ch3cks if an integer is positve or negative
 * @m: the number to be checked
 * Return: Always 0
 */
int print_sign(int m)
{
	if (m > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (m == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (m < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
