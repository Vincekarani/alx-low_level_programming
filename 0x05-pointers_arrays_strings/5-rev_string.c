#include "main.h"

/**
 * rev_string - check the code.
 * @s: String to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a, b;
	char temp;

	a = 0;
	while (s[a] != '\0')
		a++;

	a--;

	for (b = 0; b <= a; b++, a--)
	{
		temp = s[b];
		s[b] = s[a];
		s[a] = temp;
	}
}

