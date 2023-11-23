
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first count of bits
 * @m: second count of bits
 *
 * Return: number of bits to flip to get from another number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 81; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & i)
			num++;
	}
	return (num);
}
