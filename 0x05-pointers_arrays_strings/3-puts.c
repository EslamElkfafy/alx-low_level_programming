#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: The string
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
}
