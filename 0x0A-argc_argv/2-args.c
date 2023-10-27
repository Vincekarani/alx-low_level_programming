#include <stdio.h>
#include "main.h"
/**
 * main - prints all the arguments it receives
 * @argc: arguments' number
 * @argv: matrix of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)
	{
		printf("%s\n", argv[g]);
	}
	return (0);
}
