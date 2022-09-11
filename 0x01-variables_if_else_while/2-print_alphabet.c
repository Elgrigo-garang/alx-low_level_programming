#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-prints the alphabet in lowercase followed by new line
 *
 * Return: return 0
 */
int main(void)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		return (0);
	}
