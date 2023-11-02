#include "main.h"
#include <stdio.h>
/**
 * isPrintableASCII - determines if n is a printable ASCII char
 * @n: integer
 * Return: 1 if true, 0 if false
 */
int isPrintableASCII(int n)
{
		return (n >= 32 && n <= 126);
}
/**
 * printHexes - print hexadecimal values for string b in formatted form
 * @b: print string
 * @start: position to start
 * @end: position to end
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
 * replace nonprintable chars with '.'
 * @b: string to be printed
 * @start: to start position
 * @end: position to end
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
 * print_buffer - prints a buffer
 * @b: the string
 * @size: the buffer size
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
