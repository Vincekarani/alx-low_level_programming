#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
	printf("\n");
	return;
	}
	int i;

	for (i = 0; i < size; i++)
	{
	/*
	* Print the position in hexadecimal (8 chars)
	*/
	printf("%08X ", i);
	 int j;

	for (j = 0; j < 10 && i < size; j++, i++)
	}
	{
	/*
	* Print the hexadecimal content of the buffer, 2 bytes at a time
	*/
	printf("%02X ", (unsigned char)b[i]);
	/*
	* Print the the buffer, replace non-printable chars with '.'
	*/
		if (isprint(b[i]))
		{
		printf("%c", b[i]);
		}
		else
		{
		printf(".");
		}
	}
		{
		printf("\n");
		}
	{

	{
	char buffer[] = "This is a test buffer to print.";
	int size = sizeof(buffer) - 1;

	/*
	* Excluding the null terminato
	*/
	print_buffer(buffer, size);
	return (0);
	}
}
