#include <stdio.h>
/**
 * main - Add one line to this code.
 * Description: program prints a[2] = 98,
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[] = {45, 67, 12, 89, 43};
	int *p = a;

	p = p + 2;
	printf("a[2] = %d\n", *(p));
}
