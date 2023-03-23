#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;
	int index = 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - index)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			index++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

