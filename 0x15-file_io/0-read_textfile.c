#include "main.h"

/**
 * read_textfile - that reads a text file and prints it
 * @filename: the name of file
 * @letters: number of letters
 * Return: number of printed chars
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	int status, file;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (buffer == NULL)
		return (0);
	status = read(file, buffer, letters);
	if (status == -1)
		return (0);
	status = write(STDOUT_FILENO, buffer, status);
	if (status == -1)
		return (0);
	close(file);
	return (status);
}
