#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return: (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int w = 1;
	unsigned long int x = 2;
	unsigned long int l = 1000000000;
	unsigned long int w1;
	unsigned long int w2;
	unsigned long int x1;
	unsigned long int x2;

	printf("%lu", w);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", x);
		x += w;
		w = x - w;
	}

	w1 = (w / l);
	w2 = (w % l);
	x1 = (x / l);
	x2 = (x % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", x1 + (x2 / l));
		printf("%lu", x2 % l);
		x1 = x1 + w1;
		w1 = x1 - w1;
		x2 = x2 + w2;
		w2 = x2 - w2;
	}
	printf("\n");
	return (0);
}
