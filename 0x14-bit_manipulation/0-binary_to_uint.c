#include "main.h"

/**
 * binary_to_uint - a function that converts a binary count to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted count or 0 if there's one or more chars in b , not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int count;

	count = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		count <<= 1;
		if (b[i] == '1')
			count += 1;
	}
	return (count);
}

