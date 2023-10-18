#include "main.h"

/**
 * _puts - print a given string to screen
 * @str: passed pointer argument for string
 * Return: void
 */
void _puts(char *str)
{
	int put = 0;

	while (*(str + put) != '\0')
	{
		_putchar(*(str + put));
		put++;
	}
	_putchar('\n');
}
