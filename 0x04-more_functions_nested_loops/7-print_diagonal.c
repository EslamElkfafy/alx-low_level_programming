#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int counter;
	int i;

	if (n > 0)
	{
		for (counter = 0; counter < n; counter++)
		{
			for (i = 0; i < counter; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
