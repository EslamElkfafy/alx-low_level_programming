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
	int character;
	size_t counter = 0;
	int status;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	while (((character = fgetc(file)) != EOF) && (counter != letters))
	{
		status = _putchar((char)character);
		if (status == -1)
			return (0);
		counter++;
	}
	fclose(file);
	return (counter);
}
