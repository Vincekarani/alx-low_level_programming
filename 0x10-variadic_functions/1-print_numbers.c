#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - returns the sum of all its parameters.
 * @n: infinite number of parameters
 * @separator: separates argumenta
 *
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	int numb;
	va_list infinite;

	va_start(infinite, n);

	for (k = 0; k < n; k++)
	{
		numb = va_arg(infinite, int);
		printf("%d" , numb);

	if ((k != n - 1) && separator != NULL)
		printf("%s" , separator);
	}
	va_end(infinite);
	printf("\n");
}
