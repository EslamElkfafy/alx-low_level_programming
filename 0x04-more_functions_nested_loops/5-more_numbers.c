#include "main.h"
/**
 * more_numbers - prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int n;
	int digit0, digit1;
	int number;
	int count;

	for (count = 0; count < 10; count++)
	{

		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				number = n;
				digit0 = number % 10;
				number /= 10;
				digit1 = number % 10;
				_putchar(digit1 + '0');
				_putchar(digit0 + '0');
			}
			else
				_putchar(n + '0');
		}
		_putchar('\n');
	}
}
