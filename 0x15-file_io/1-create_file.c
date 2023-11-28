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
	int f, letters, wr;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
	wr = write(f, text_content, letters);
	if (wr == -1)
		return (-1);
	close(f);
	return (1);
}
