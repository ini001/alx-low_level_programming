#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	
	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
		    int a = i / 10;
		    int b = i % 10;
		    int c = j / 10;
		    int d = j % 10;

		    putchar('0' + a);
		    putchar('0' + b);
		    putchar(' ');
		    putchar('0' + c);
		    putchar('0' + d);
		    putchar(',');
		    putchar(' ');
		}
	}
	return (0);
}
