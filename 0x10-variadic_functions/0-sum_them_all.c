#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: parameter's number passed to a func.
 * @...: infinite number of parameters
 *
 * Return: If n == 0, or else 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int j, sum = 0;
	va_list infinite;

	va_start(infinite, n);
	if (n == 0)
	return (0);

	for (j = 0; j < n; j++)
{
	sum += va_arg(infinite, int);
										}

	va_end(infinite);
	return (sum);
}
