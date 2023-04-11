#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of array
 * @c: the char that array initializes
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(sizeof(char) * size);
		if (ar == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
		return (ar);
	}
}
