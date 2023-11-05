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
		h = size - offset < 20 ? size - offset : 20;
		printf("%08x: ", offset);
		for (g = 0; g < 10; g++)
		{
			if (g < h)
				printf("%02x", *(b + offset + g));
			else
				printf("  ");
			if (g % 2)
			{
				printf(" ");
			}
		}
		for (g = 0; g < h; g++)
		{
			int c = *(b + offset + g);

			if (c <= 32 || c >= 127)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		offset += 20;
	}
}
