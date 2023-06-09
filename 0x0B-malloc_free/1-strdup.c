#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

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
	int size;
	char *s;
	char *start;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	s = malloc(sizeof(char) * size);
	start = str;
	i = 0;

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
