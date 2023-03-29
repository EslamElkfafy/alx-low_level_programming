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
			if ((*start == code[i] && *start == 'a') ||
			(*start == code[i] && *start == 'A') ||
			(*start == code[i] && *start == 'e') ||
			(*start == code[i] && *start == 'E') ||
			(*start == code[i] && *start == 'o') ||
			(*start == code[i] && *start == 'O') ||
			(*start == code[i] && *start == 't') ||
			(*start == code[i] && *start == 'T') ||
			(*start == code[i] && *start == 'l') ||
			(*start == code[i] && *start == 'L')
			)
			{
				*start = code[i + 1];
			}
		}
		start++;
	}
	return (s);
}
