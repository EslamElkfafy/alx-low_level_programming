#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: the destination
 * @src: the source.
 * @n: the number of bytes from src.
 * Return: string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			dest[i] = *src;
			src++;
		}
		else
		{
			dest[i] = '\0';
		}
	}

	return (dest);
}
