#include "main.h"

/**
 * print_rev - prints given string in reverse
 * @s: passed pointer argument for string
 * Return: void
 */
void print_rev(char *s)
{
	int rev = 0;

	while (*(s + rev) != '\0')
	{
		rev++;
	}
	rev--;
	while (rev >= 0)
	{
		_putchar(*(s + rev));
		rev--;
	}
	_putchar('\n');
}
