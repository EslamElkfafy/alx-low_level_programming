#include <stdio.h>
/**
 * main - main entry point
 * Return: always 0
 */
int main(void)
{
	int c;
	int number, r;

	for (c = 1; c <= 9899; c++)
	{
		number = c / 1000;
		r = number % 10;
		putchar(r + 48);
		number = c / 100;
		r = number % 10;
		putchar(r + 48);
		putchar(' ');
		number = c / 10;
		r = number % 10;
		putchar(r + 48);
		number = c;
		r = number % 10;
		putchar(r + 48);
		if (c != 9899)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
