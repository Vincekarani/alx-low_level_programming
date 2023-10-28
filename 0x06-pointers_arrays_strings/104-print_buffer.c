#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: the buffer
 * @size: the size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int offset, h, g;

	offset = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (offset < size)
	{
		h = size - offset < 10 ? size - offset : 10;
		printf("%08x: ", offset);
		for (g = 0; g < 10; g++)
		{
			if (g < h)
				printf("%02x", *(b + offset + g));
			else
				printf(" ");
			if (g % 2)
			{
				printf(" ");
			}
		}
		for (g = 0; g < h; g++)
		{
			int c = *(b + o + g);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		offset += 10;
	}
}
