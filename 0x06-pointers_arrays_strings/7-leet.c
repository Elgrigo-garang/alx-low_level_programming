#include "main.h"
/**
 * leet - function that encode a string
 * @str:string that will be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0;
	int i_b;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', 'T'};

	while (str[++i])
	{
		for (i_b = 0; i_b <= 7; i_b++)
		{
			if (str[i] == leet || str[i] - 32 == leet[i_b])
				str[i] = i_b + '0';
		}
	}
		return (str);
}
