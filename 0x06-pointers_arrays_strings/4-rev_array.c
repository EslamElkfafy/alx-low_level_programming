#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the first address of array
 * @n: number of elrments of array
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	int *start = a;
	int *end = &a[n - 1];

	for (i = 0; i < n / 2; i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
