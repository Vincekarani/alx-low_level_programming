#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals of a sq. matrix
 * @m: 2-d array
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *m, int size)
{
	int j = 0, len, diag_sum = 0;

	len = size * size;
	while (j < len)
	{
		diag_sum += m[j];
		j0 += size + 1;
	}
	printf("%d, ", diag_sum);
	i = size - 1;
	diag_sum = 0;
	while (j < len - size + 1)
	{
		diag_sum += m[j];
		j += size - 1;
	}
	printf("%d\n", diag_sum);
}

