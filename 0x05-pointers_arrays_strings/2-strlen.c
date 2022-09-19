#include "main.h"

/**
 * int_strlen-function that returns the length of the string
 * @s:string
 * Return:return length of an integer
 */
int_strlen(char *s)
	{
		int len = 0;

		while (*(s + len) != '\0')
			len++;
		return (len);
	}
