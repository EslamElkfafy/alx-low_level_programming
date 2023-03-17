#include <stdio.h>
/**
 * main - main entry point
 * Return: always 0
 */
int main(void)
{
	int digit0 = 0, digit1 = 0, digit2 = 0, digit3 = 0;
	int init = 1;
	int c;
	for (c = 0; c <= 8549; c++)
	{
   		digit0 += 1;
   		putchar(digit3 + 48);
   		putchar(digit2 + 48);
   		putchar(' ');
   		putchar(digit1 + 48);
   		putchar(digit0 + 48);
   		if (c != 8549)
		{
			putchar(',');
   			putchar(' ');
		}
   		if (digit0 == 9 && digit1 == 9 && digit2 == 9)
   		{
       			digit3 += 1;
       			digit2 = 0;
       			digit1 = 0;
       			digit0 = 0;
   		}
   		else if (digit0 == 9 && digit1 == 9)
   		{
       			digit2 +=1;
       			digit1 = 0;
       			if (init < 9)
       			{
	   			digit0 = init;
	   			init += 1;
       			}
       			else
       			{
	   			init = 1;
	   			digit0 = 0;
       			}
  		}
   		else if (digit0 == 9)
   		{
			digit1 += 1;
       			digit0 = 0;
   		}
	}
	putchar('\n');         
	return (0);
}
