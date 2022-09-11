#include <stdio.h>
/**
 * main-prints lettrrs in lower case apart from e and q
 *
 * Return:always 0
 */
int main(void)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			if (ch == 'q')
				continue;
			else if (ch == 'e')
				continue;
			putchar (ch);
		}
		putchar('\n');
		return (0);
	}
