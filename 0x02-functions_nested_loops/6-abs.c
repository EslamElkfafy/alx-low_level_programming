#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: The number to be computed
 *
 * Return: n always
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		n = n - 2 * n;
		return (n);
	}
}
