#include "main.h"
/**
 * print_last_digit-prints the last digit of a number
 *
 * @n:the passed args
 * Return:value of the last digit
 */
int print_last_digit(int n)
	{
		int last_digit = n % 10;

		if (last_digit < n)
			last_digit = -1;
		_putchar(last_digit + '0');
		return (last_digit);
	}
