#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int k, sum, f;

	sum = 0;	

	srand(time(NULL));

	for (k = 0; k < 100; k++)
	{
		pass[k] = rand() % 78;
		sum += (pass[k] + '0');
		putchar(pass[k] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			f = 2772 - sum - '0';
			sum += f;
			putchar(f + '0');
			break;
		}
	}

	return (0);
}
