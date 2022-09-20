#include "main.h"

/**
 * _strlen-function that returns the length of the string
 * @s:string to count
 *
 * Return: return length of an integer
 */
int _strlen(char *s)
	{
		int c = 0;

		for (; *s != '\0'; s++;)
		{
			c++;
		}
		return (c);
	}
