#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: The string
 */
void rev_string(char *s)
{
	int index = 0;
	int length = 0;

	while (s[index] != '\0')
	{
		length++;
		index++;
	}
	char temp[length + 1];
	int i = 0;

	while (index--)
	{
		temp[i] = s[index];
		i++;
	}
	s = temp;
}
