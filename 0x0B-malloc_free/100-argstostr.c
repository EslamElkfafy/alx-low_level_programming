#include "main.h"
#include <stdlib.h>

/**
 * _strlen - detect lenghth of string
 * @str: the string
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: size of array of arguments
 * @av: array of arguments
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, size;
	char *s, start;

	for (i = 0; i < ac; i++)
	{
		size += _strlen(av[i]);
		size++;
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	start = s;
	for (i = 0; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			*start = *av[i];
			start++;
			av[i]++;
		}
		*start = '\n';
	}
	return (s);
			
}
