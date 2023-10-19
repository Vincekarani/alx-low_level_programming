#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int q, m, k;

	q = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (q < size)
	{
		m = size - q < 10 ? size - q : 10;
		printf("%08x: ", q);
		for (k = 0; k < 10; k++)
		{
			if (k < m)
				printf("%02x", *(b + q + k));
			else
				printf(" ");
			if (k % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < m; k++)
		{
			int c = *(b + q + k);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		q += 10;
	}
}
