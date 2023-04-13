#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements of array
 * @size: size of each elements
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i, n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = nmemb * size;
	s = malloc(n);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		s[i] = '0';
	}
	return (s);
}
