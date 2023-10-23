#include "main.h"
/**
 * main - check the code
 * @s: String
 * @c: Character
 * Return: Pointer to first occurrence or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

