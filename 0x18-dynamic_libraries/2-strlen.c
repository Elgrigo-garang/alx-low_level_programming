#include "main.h"

/**
 * _strlen-function that returns the length of the string
 * @s:string to count
 *
 * Return: return length of an integer
 */
int _strlen(char *s)
	{
		int len = 0;

		while (*(s + len) != '\0')
			len++;

		return (len);
	}
