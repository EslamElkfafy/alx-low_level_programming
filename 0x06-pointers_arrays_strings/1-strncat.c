#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the destination
 * @src: the source.
 * @n: the number of bytes from src.
 * Return: string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
		{
			break;
		}
	}
	*dest = '\0';
	return (start);
}
