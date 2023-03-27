#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: The string
 */
void puts_half(char *str)
{
	int index = 0;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	index = (length + 1) / 2;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
