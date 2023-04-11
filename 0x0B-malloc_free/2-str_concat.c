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
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the secound string
 *
 * Return: pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int size;
	char *ar;
	int i = 0;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	size = _strlen(s1) + _strlen(s2) + 1;
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	while (s1 && *s1 != '\0')
	{
		ar[i] = *s1;
		s1++;
		i++;
	}
	while (s2 && *s2 != '\0')
	{
		ar[i] = *s2;
		s2++;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
