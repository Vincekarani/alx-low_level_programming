#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: is the number of strings passed to the function
 *Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	va_list arg;
	char *str = "(nil)";
	char *strarray = NULL;
	char *separator = ", ";

	va_start(argument_input, format);
	while (format[i] != '\0' && format != NULL)
	{
	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(argument_input, int));
			break;
		case 'i':
			printf("%d", va_arg(argument_input, int));
			break;
		case 'f':
			printf("%f", va_arg(argument_input, double));
			break;
		case 's':
			sarray = va_arg(argument_input, char *);
			if (sarray == NULL)
				sarray = str;
			printf("%s", sarray);
			break;
		default:
			i++;
			continue;
	}
	if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's'))
		printf("%s", separator);
	i++;
}
printf("\n");
va_end(argument_input);
}
