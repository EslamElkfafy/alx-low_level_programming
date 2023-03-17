#include <stdio.h>
/**
 * main - main entry point
 * Return: always 0
 */
int main(void)
{
	int c;
	int s = 44;

	for (c = 48; c <= 57; c++)
	{
		if (c != 48)
		{
			putchar(' ');
		}
		if (c == 57)
		{
			s -= 8;
		}
		putchar(c);
		putchar(s);
	}
	putchar('\n');
	return (0);
}
