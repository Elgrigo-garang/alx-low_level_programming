#include "main.h"
#include <stdio.h>

/**
 *print_array-prints elements of an array of an enteger
 *@a: array
 *@n:number of elements
 *Return: nothing
 */
void print_array(int *a, int n)
	{
		int inc;

		for (inc = 0; inc < n; inc++)
		{
			if (inc != n - 1)
				printf("%d, ", a[x]);
			else
				printf("%d, ", a[x]);
		}
		putchar(10);
	}
