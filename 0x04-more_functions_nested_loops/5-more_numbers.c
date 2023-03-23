#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int n, counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
