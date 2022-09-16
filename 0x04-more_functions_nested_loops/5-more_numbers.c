#include "main.h"
/**
 * more_numbers-prints more numbers
 *
 * Returns:return nothing
 */
void more_numbers(void)
	{
		int n1, n2;

		for (n2 = 0; n2 <= 9; n2++)
		{
			for (n1 = 0; n1 < 15; n1++)
			{
				if (n1 > 9)
				{
					_putchar((n1 / 10) + '0');
				}
				_putchar((n1 % 10) + '0');
			}
			_putchar('\n');
		}
	}
