#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 * Return:always 0 (success)
 */
void _puts_recursion(char *s)
{
	int  i = 0;

	while (s[i] != '\n' && s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n')
}
