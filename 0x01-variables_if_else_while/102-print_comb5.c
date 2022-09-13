#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main-prints all possible combinations of two two-digit numbers
 *
 * Return:return 0
 */
int main()
	{
		int num1, num2;

		for (num1 = 0; num1 < 100; num1++)
		{
			if (num1 > num2)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				if (num1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
	}
