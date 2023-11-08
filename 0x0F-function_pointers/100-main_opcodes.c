#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number's arguments
 * @argv: array's arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int b, f;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;
	for (f = 0; f < b; f++)
	{
		if (f == b - 1)
		{
			printf("%02hhx\n", arr[f]);
			break;
		}
		printf("%02hhx ", arr[f]);
	}
	return (0);
}
