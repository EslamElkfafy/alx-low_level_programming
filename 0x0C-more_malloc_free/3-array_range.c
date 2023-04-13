#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; min++)
	{
		s[i] = min;
		i++;
	}
	return (s);
}
