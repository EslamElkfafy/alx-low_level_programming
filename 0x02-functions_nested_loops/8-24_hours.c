#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int i, j;
	int digit0, digit1, digit2, digit3, digit4;
	int number1, number2;

	for (i = 0; i <= 24; i++)
	{
		for (j = 0; j <= 60; j++)
		{
			number1 = j;
			digit0 = number1 % 10;
			number1 /= 10;
			digit1 = number1 % 10;
			number2 = i;
			digit2 = number2 % 10;
			number2 /= 10;
			digit3 = number2 % 10;
			_putchar(digit3 + '0');
			_putchar(digit2 + '0');
			_putchar(':');
			_putchar(digit1 + '0');
			_putchar(digit0 + '0');
			_putchar('\n');
			if (digit0 == 9 && digit1 == 5 && digit2 == 3 && digit3 == 2)
			{
				break;
			}
		}
		if (digit0 == 9 && digit1 == 5 && digit2 == 3 && digit3 == 2)
		{
			break;
		}
	}

}
