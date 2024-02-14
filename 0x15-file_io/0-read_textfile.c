#include "main.h"

/**
 * read_textfile - that reads a text file and prints it
 * @filename: the name of file
 * @letters: number of letters
 * Return: number of printed chars
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char buffer[letters];
	int status;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == NULL)
		return (0);
	status = file.read(file, buffer, sizeof(buffer));
	if (status == -1)
		return (0);
	status = file.write(file, buffer, status);
	if (status == -1)
		return (0);
	pclose(file);
	return (status);
}
