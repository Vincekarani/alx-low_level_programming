nclude "main.h"

/**
 * leet - converts string to leet
 * @c: character string pointer
 * Return: char pointer
 */
char *leet(char *c)
{
	int k = 0, l;
	char a[] = {'a', 'e', 'o', 't', 'l'}, b[] = {'A', 'E', 'O', 'T', 'L'},
	     leet[] = {'4', '3', '0', '7', '1'};

	while (c[k] != '\0')
	{
		l = 0;
		while (l < 5)
		{
			if (c[k] == a[j] || c[k] == b[l])
				c[k] = leet[j];
			l++;
		}
		k++;
	}
	return (c);
}
