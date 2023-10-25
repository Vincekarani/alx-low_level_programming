#include "main.h"
/**
 * _sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	return (actual_sqrt_recursion(n, 0));
	}
	{
		int i;

		if (i * i > n)
			return (-1);
		if (i * i == 1)
			return (i);
		return (actual_sqrt_recursion(n, i + 1));
	}
}
