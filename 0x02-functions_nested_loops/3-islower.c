#include "main.h"
/**
 * _islower - check code if c is lower case
 *
 * Description- check code is lower case
 * @c: character to test.
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
