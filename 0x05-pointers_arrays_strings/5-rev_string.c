#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: The string
 */
void rev_string(char *s)
{
	int index = 0;
	char *temp = "";
	int i = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	while (index--)
	{
		*(temp + i) = s[index];
		i++;
	}
	s = temp;
}
