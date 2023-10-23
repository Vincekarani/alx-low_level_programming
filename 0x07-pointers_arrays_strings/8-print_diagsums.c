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
	int d = 0, len, diag_sum = 0;

	len = size * size;
	while (d < len)
	{
		diag_sum += m[d];
		d += size + 1;
	}
	printf("%d, ", diag_sum);
	i = size - 1;
	diag_sum = 0;
	while (d < len - size + 1)
	{
		diag_sum += a[i];
		i += size - 1;
	}
	printf("%d\n", diag_sum);
}

