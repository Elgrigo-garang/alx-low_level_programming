#include<stdio.h>
/**
 * main-prints all the numbers of base 16 in lowercase
 *
 * Return:return 0
 */
int main(void)
	{
		char l;

		for (l = 48; l <= 57 ; l++)
		{
			putchar (l);
		}
		for (l = 97; l <= 102; l++)
		{
			putchar (l);
		}
		putchar ('\n');
		return (0);
	}
