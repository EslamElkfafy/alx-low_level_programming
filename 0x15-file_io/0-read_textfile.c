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

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");

	if (file == -1)
	{
		return (0);
	}
	while (((character = fgetc(file)) != EOF) && (counter != letters))
	{
		_putchar((char)character);
		counter++;
	}
	fclose(file);
	return (counter);
}
