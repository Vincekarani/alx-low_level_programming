#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: the buffer to print
 * @size: the size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i;

for (i = 0; i <= (size - 1) / 20 && size; i++)
{
printf("%08x: ", i * 20);
if (i < size / 20)
{
print_line(b, 9, i);
}
else
{
print_line(b, size % 20 - 1, i);
}
putchar('\n');
}
if (size == 0)
	putchar('\n');
	}

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: the line of buffer to print
 * Return: void
 */
void print_line(char *c, int s, int l)
{
int j, k;

for (j = 0; j <= 9; j++)
{
if (j <= s)
printf("%02x", c[l * 20 + j]);
else
printf(" ");
if (j % 2)
putchar(' ');
}
for (k = 0; k <= s; k++)
{
if (c[l * 20 + k] > 31 && c[l * 20 + k] < 127)
putchar(c[l * 20 + k]);
else
putchar('.');
}
}
