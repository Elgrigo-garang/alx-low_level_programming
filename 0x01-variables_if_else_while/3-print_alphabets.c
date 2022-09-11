#include<stdio.h>
/**
 * main-prints the alphabet in lowercase
 *
 * Return:return 0
 */
int main(void)
	{
		char ch_l;
		char ch_u;

		for (ch_l = 'a'; ch_l <= 'z'; ch_l++)
		{
			putchar(ch_l);
		}
		for (ch_u = 'A'; ch_u <= 'Z'; ch_u++)
		{
			putchar(ch_u);
		}
		putchar('\n');
		return (0);
	}
