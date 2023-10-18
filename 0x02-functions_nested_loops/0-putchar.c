#include "main.h"

/**
 *main - prints the word Holberton
 *
 *Return: Always  0 o(Success)
 */

int main(void)
{
	char c[] = "_putchar";
	int j = 0;

	while (c[j] != '\0')
	{
		_putchar(c[j]);
		j++;
	}
	_putchar(10);

	return (0);
}
