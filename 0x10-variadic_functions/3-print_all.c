#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: NULL
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arg;
	char *str = "(nil)";
	char *array = NULL;
	char *separator = ", ";

	va_start(arg, format);

	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				array = va_arg(arg, char *);
				if (array == NULL)
					array = str;
				printf("%s", array);
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
	va_end(arg);
}
