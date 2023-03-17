#include <stdio.h>
/**
 * main - main entry point
 * Return: always 0
 */
int main(void)
{
	int c;
	int i;
	int j;

	for (c = 48; c <= 55; c++)
	{
		for (i = c + 1; i <= 56; i++)
		{
			for (j = i + 1; j <= 57; j++)
			{
				putchar(c);
				putchar(i);
				putchar(j);
				if (c != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
