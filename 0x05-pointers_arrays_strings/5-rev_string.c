#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: The string
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	
	int index = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[index];
		s[index--] = temp
	}
}
