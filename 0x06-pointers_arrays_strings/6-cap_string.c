#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string
 * Return: the string be updated
 */
char *cap_string(char *s)
{
	char *start = s;
	int check = 0;

	if (*start >= 'a' && *start <= 'z')
	{
		*start -= 32;
	}
	while (*start != '\0')
	{
		if (*start == ' ' ||
		*start == '\t' ||
		*start == '\n' ||
		*start == ',' ||
		*start == ';' ||
		*start == '.' ||
		*start == '!' ||
		*start == '?' ||
		*start == '"' ||
		*start == '(' ||
		*start == ')' ||
		*start == '{' ||
		*start == '}')
		{
			check = 1;
		}
		else
		{
			if (check == 1)
			{
				if (*start >= 'a' && *start <= 'z')
				{
					*start -= 32;
				}
			}
			else
			{
				if (*start >= 'A' && *start <= 'Z')
				{
					*start += 32;
				}
			}
			check = 0;
		}
		start++;
	}
	return (s);
}
