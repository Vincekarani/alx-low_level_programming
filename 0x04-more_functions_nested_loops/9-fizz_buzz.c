#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;

	for (u = 1; u <= 100; u++)
	{
		if (u % 3 == 0 && u % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (u % 5 == 0 && u % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (u % 3 == 0 && u % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (u == 1)
		{
			printf("%d", u);
		}
		else
		{
			printf(" %d", u);
		}
	}
	printf("\n");

	return (0);
}
