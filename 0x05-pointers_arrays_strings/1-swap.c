#include "main.h"

/**
 * swap_int - swaps the values of two integer.
 *
 * @a: The first integer
 * @b: The secound integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
