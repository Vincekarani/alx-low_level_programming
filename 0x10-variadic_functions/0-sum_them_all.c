#include "variadic_functions.h"
#include <stdarg>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: parameter's number passed to a func.
 * @...: infinite number of parameters
 *
 * Return: If n == 0, or else 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int j, sum = 0

	va_start(p, n);

	for (j = 0; j < n; j++)
		sum += va_arg(p, int;

	va_end(p);
	return (sum);
}
