#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: String
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = _strlen_recursion(s + 1);
	return (len + 1);
}
