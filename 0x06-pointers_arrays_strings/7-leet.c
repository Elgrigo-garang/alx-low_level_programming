#include "main.h"
/**
 * leet - function that encode a string
 * @str:string that will be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}
/**
 * transform-helperto map a latter encodding
 * @x: char to be encoded
 *
 * Return:the encoded char
 */
char transform(char x)
	{
		char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
		char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};

		while (i < 8)
		{
			if (x == mappig_low[i] 
