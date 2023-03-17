#include <stdio.h>
/**
 * main - main entry point
 * Return: always 0
 */
int main(void)
{
	int c;
	int i;

	for (c = 48; c <= 56; c++)
	{
		for (i = c + 1; i <= 57; i++)
		{
			putchar(c);
			putchar(i);
			if (c != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
