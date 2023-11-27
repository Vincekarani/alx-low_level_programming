#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content:  is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, letters, wr;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)

		wr = write(f, text_content, letters);
		if (wr == -1)
			return (-1);
	}
	close(f);
	return (1);
}
