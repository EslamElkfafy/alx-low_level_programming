#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the string
 * Return: the string be updated
 */
char *string_toupper(char *s)
{
	char *check = s;

	while (*check != '\0')
	{
		if (*check > 'a' && *check < 'z')
		{
			*check -= 32;
		}
		check++;
	}
	return (s);
}
