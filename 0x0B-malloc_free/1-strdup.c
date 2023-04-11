#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of
 * the string given as a parameter.
 *
 * @str: the string
 * Return: a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *s = malloc(sizeof(str));
	char *start = str;
	int i = 0;

	if (s == NULL)
	{
		return (NULL);
	}
	while (*start != '\0')
	{
		s[i] = *start;
		start++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
