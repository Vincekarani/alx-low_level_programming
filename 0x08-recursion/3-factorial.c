#include "main.h"

/**
 * factorial - returns the factorial of a given number or -1 if n is negative
 *
 * @n: n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
