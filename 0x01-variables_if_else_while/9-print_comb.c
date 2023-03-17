#include <stdio.h>
/**
 * main - main entry point
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 48)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
