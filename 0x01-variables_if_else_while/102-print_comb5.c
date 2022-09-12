#include<stdio.h>
/**
 * main-prints all possible combinations of two two-digit numbers
 *
 * Return:return 0
 */
int main(void)
	{
		int a, b;

		for (a = 0; a < 100; a++)
		{
			if (b < a)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
	}
