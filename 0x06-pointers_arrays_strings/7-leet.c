#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: the string
 * Return: the string be updated
 */
char *leet(char *s)
{
	char *start = s;
	char *code = "a4A4e3E3o0O0t7T7l1L1";
	int i;

	while (*start != '\0')
	{
		for (i = 0; i < 20; i++)
		{
			if (*start == code[i] && (*start == 'a' ||
			*start == 'A' ||
			*start == 'e' ||
			*start == 'E' ||
			*start == 'o' ||
			*start == 'O' ||
			*start == 't' ||
			*start == 'T' ||
			*start == 'l' ||
			*start == 'L')
			)
			{
				*start = code[i + 1];
			}
		}
		start++;
	}
	return (s);
}
