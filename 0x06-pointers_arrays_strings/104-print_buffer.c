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
	int offset;
	int j;
	int i;

	offset = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (offset < size)
	{
		j = size - offset < 10 ? size - offset : 10;
		printf("%08x: ", offset);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + offset + i));
			else
				printf(" ");
			if (i % 8)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + offset + i);

			if (c < 31 || c > 126)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		offset += 10;
	}
}
