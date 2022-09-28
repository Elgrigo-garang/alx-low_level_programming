#include "main.h"
/**
 * _strlen_recursion-function that returns the length of a string
 * @s:pointer block of memory to fill
 *
 * Return:length of string
 */
int _strlen_recursion(char *s)
	{
		if (*s == '\0')
			return (0);
		s++;

		else
			return (1 + __strlen_recursion(s + 1));
	}
