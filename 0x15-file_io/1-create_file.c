#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file to create
 * and text_content is a NULL terminated
 * string to write to the file.
 * @text_content: a NULL terminated
 * string to write to the file
 * Return: 1 on success. -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f, len = 0, ch;

	if (filename == NULL)
		return (-1);
	f = open(filename, (O_CREAT | O_TRUNC) | O_WRONLY, 0600);
	if (f == -1)
		return (-1);
	while (text_content[len] != '\0')
		len++;
	ch= write(f, text_content, len);
	close(f);
	if (ch != -1)
		return (1);
	else
		return (-1);
}
