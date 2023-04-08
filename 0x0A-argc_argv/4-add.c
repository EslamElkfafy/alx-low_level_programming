#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * check - check if one of the string contains symbols
 * @s: the string
 * Return: 0 if the string not contains symbols else 1
 */
int check(char *s)
{
	if (*s == '-')
	{
		s++;
	}
	if (*s == '\0')
	{
		return (1);
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			s++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success 1 if failure
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	argv++;
	argc--;
	while (argc--)
	{
		if (check(*argv) == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(*argv);
		}
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}

