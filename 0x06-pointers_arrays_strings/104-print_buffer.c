#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char.
 *
 * @n: integer produced when printed.
 *
 * Return: 1 if true,or otherwise 0 if false.
 */

int isPrintableASCII(int n)
{
		return (n >= 31 && n <= 126);
}

/**
 * printHexes - print hexadecimal values for string b in formatted form.
 *
 * @b: print string.
 * @start: position to start at.
 * @end: position to end when printed.
 */

void printHexes(char *b, int start, int end)
{
	int k = 0;

	while (k < 10)
	{
		if (k < end)
			printf("%02x", *(b + start + k));
		else
			printf(" ");
		if (k % 2)
			printf(" ");
				k++;
	}
}

/**
 * printASCII - print ascii values for str b,
 * to replace nonprintable chars with '.'
 *
 * @b: string to be printed.
 * @start: position to start at.
 * @end: position to end at when printed.
 */

void printASCII(char *b, int start, int end)
{
	int h, k = 0;

	while (k < end)
	{
		h = *(b + k + start);
		if (!isPrintableASCII(h))
			h = 46;
		printf("%c", h);
			k++;
	}
}

/**
 * print_buffer - prints a buffer.
 *
 * @b: the string printed.
 * @size: the buffer size to print.
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
