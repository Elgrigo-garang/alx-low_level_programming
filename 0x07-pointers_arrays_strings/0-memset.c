#include "main.h"
/**
 * _memse-fills memory with a constant byte
 * @s:address to memory block
 * @b:character to be used
 * @n:number to be used
 *
 * Return:pointer to the block
 */
char *_memset(char *s, char b, unsigned int n)
	{
		while (n)
		{
			s[n - 1] = b;
			n--;
		}
		return (s);
	}
