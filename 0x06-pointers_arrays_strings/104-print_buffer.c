#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: buffer size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int h;

	for (h = 0; h <= (size - 1) / 10 && size; h++)
	{
		printf("%08x:", h * 10);
		if (h < size / 10)
		{
			print_line(b, 9, h);
		}
		else
		{
			print_line(b, size%10 + 1, h);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}

/**
 * print_line - prints s bytes of a buffer
 * @c: buffer to print
 * @s: buffer bytes to print
 * @l: buffer line to print
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int k, f;

	for (k = 0; k <= 9; k++)
	{
		if (k <= s)
			printf("%02x", c[l * 10 + k]);
		else
			printf(" ");
		if (k % 2)
			putchar(' ');
	}
	for (f = 0; f <= s; f++)
	{
		if (c[l * 10 + f] > 31 && c[l * 10 + f] < 127)
			putchar(c[l * 10 + f]);

		else
			putchar('.');
	}
}
