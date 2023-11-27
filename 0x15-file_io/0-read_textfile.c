#include "main.h"

/**
 * read_textfile - a function that reads a
 * text file and prints it to the POSIX
 * standard output.
 * @filename: name of the file.
 * @letters: number of letters it should read and print
 *
 * Return: 0 if if the file can not be opened or read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	size_t n, wr;
	char *buff;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	n = read(f, buff, letters);
	wr = write(STDOUT_FILENO, buff, n);
	close(f);
	free(buff);
	return (wr);
}
