#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum No. of coins to make change for an amount of money
 * @argc: arguments' number
 * @argv: matrix of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, f, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (f = 0; f < 5 && num >= 0; f++)
	{
		while (num >= coins[f])
		{
			result++;
			num -= coins[f];
		}
	}
	printf("%d\n", result);
	return (0);
}
