#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer.
 * @b: the buffer to be printed.
 * @size: the size of buffer.
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
/**
 * print_line - prints  s bytes of a buffer.
 * @c: the buffer to  print printed.
 * @s: the bytes of buffer to be printed.
 * @l: the line of buffer to be printed.
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int j, f;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", c[l * 10 + j]);
		else
			printf(" ");
		if (j % 2)
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
