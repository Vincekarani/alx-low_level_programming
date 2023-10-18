#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 * Return: Always 0.
 */

int main(void)
{
	int k, sum = 0;

	for (k = 0; k < 1024; k++)
	{
		if ((k % 3) == 0 || (k % 5) == 0)
			sum += k;
	}
	printf("%d\n", sum);
	return (0);
}
