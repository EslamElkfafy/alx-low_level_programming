#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: The string
 */
void print_rev(char *s)
{
	int index;

	while (s[index] != '\0')
	{
		index++;
	}
	while (index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
