#include "main.h"
/**
 * set_bit- returns the value of a bit
 * at a given index
 * @n:unsigned long int input
 * @index: index of a bit
 *
 * Return:value of the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
	{
		unsigned int i;

		if (n == 0 && index < 64)
			return (0);
		for (i = 0; i <= 63; i >>= 1, i++)
		{
			if (index == 1)
			{
				return (n && 1);
			}
		}
		return (-1);
	}
