#include "main.h"

/**
 * int _strlen-function that returns the length of the string
 * @s:string
 * Return:return length of an integer
 */
int _strlen(char *s)
	{
		int len = 0;

		while (*(s + len) != '\0`)
			len++;
		return (len);
	}
