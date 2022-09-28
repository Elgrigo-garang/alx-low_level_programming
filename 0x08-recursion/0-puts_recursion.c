#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 * Return:always 0 (success)
 */
void _puts_recursion(char *s)
	{
		if (*s == '\0')
		{
			_putchar('\0');
		}
		else
		{
			_putchar(s[0]);
			_puts_recursions(s + 1);
		}
	}
