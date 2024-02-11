#include "main.h"
/**
 * binary_to_uint - binary to unsigned integer
 * @b: input binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0;
	int sum = 0, i;

	if (b == NULL)
	{
		return (0);
	}
	i = 0;
	while (b[i] != '\0')
	{
		i++;
		length++;
	}
	for (i = 0; i < length ; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			sum += 1 << (length - i - 1);
	}
	return (sum);
}
