#include "main.h"

/**
 * factorial - returns the factorial of 3.
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
