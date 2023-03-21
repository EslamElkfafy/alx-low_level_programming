#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @number: The number to be checked
 *
 * Return: n always
 */
int print_last_digit(int number)
{
	int n;

	if (number > 0)
	{
		n = number % 10;
		_putchar(n);
		return (n);
	}
	else if (number == 0)
	
		n = number % 10;
		_putchar(n);
		return (n);
	}
	else
	{
		number = number - 2 * number;
		n = number % 10;
		_putchar(n);
		return (n);
	}
}
