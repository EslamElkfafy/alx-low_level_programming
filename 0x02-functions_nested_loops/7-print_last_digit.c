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
	int n = number % 10;

	if (n > 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else if (n == 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n *= -1;
		_putchar('0' + n);
		return (n);
	}
}
