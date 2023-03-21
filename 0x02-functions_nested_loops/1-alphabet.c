#include <stdio.h>
#include "main.h"
/**
 * main - main entry point
 * Return: always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
