#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int counter;
	int i = 0;

	if (n > 0)
	{
		for (counter = 0; counter < n; counter++)
		{
			for (; i < counter; i++)
			{
				_putchar(' ');
			}
			i = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
