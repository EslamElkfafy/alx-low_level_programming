#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, digit0, digit1, number;
	int n = 0;
	int offset = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != 0)
			{
				if (n < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(n + '0');
				}
				else
				{
					number = n;
					digit0 = number % 10;
					number /= 10;
					digit1 = number % 10;
					_putchar(',');
					_putchar(' ');
					_putchar(digit1 + '0');
					_putchar(digit0 + '0');

				}
			}
			else
			{
				_putchar(n + '0');
			}
			n += offset;
		}
		_putchar('\n');
		offset += 1;
		n = 0;
	}
}
