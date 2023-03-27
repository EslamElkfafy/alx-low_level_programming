#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: The string
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int counter = 0;
	int index = 0;

	while (s[index] != '\0')
	{
		counter++;
		index++;
	}
	return (counter);
}
