#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the destination
 * @src: the source.
 * Return: string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (start);
}
