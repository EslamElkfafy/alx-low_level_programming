#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return length of string
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the secound string
 * @n: the number of bytes of s2
 *
 * Return: pointer shall point to a newly allocated
 * space in memory, which contains s1, followed by
 * the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, size;
	char *s;
	int i = 0;
	int j;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n < len2)
	{
		return (NULL);
	}
	size = len1 + len2 + 1;
	s = malloc(size * sizeof(char));
	while (*s1 != '\0')
	{
		s[i] = *s1;
		s1++;
		i++;
	}
	for (j = 0; j < n; j++)
	{
		s[i] = *s2;
		s2++;
		i++;
	}
	return (s);
}
