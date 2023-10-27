#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @u: the integer to be converted.
 * Return: Always 0.
 */
int _abs(int u)
{
	if (u < 0)
		u = u * -1;
	return (u);
}
