#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: is the number of strings passed to the function
 *Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *str = NULL;
	va_list arg;

	va_start(arg, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if ((k != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
