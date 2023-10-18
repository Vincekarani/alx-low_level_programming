#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code.
 * @a: Array name
 * @n: Array index total
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b + 1 != n)
			printf(", ");
	}

	printf("\n");
}
