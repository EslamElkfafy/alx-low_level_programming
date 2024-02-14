#include "main.h"

/**
 * create_file - that creates a file.
 * @filename: path the file
 * @text_content: content of file
 * Return: integer number
 */

int create_file(const char *filename, char *text_content)
{
	int file, status, text_size;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		status = write(file, "", 1);
		close(file);
		return (1);
	}
	for (text_size; text_content[text_size] != '\0'; text_size++)
		;
	status = write(file, text_content, text_size);
	close(file);
	return (1)
}
