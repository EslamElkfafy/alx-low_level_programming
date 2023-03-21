#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The number to be checked
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n <= 98; n++)
		{
			if (n == 98)
				printf("%i", n);
			else
				printf("%i, ", n);
		}
	}
	else if (n > 98)
	{
		for (n; n > 98; n--)
		{
			if (n == 98)
				printf("%i", n);
			else
				printf("%i, ", n);
		}
	}
	else
	{
		printf("%i", 98);
	}
}
