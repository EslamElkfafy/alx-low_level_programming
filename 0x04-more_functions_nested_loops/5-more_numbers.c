#include "main.h"
/**
 * more_numbers - prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	char c;
	int count;

	for (count = 0; count < 10; count++)
	{

		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
