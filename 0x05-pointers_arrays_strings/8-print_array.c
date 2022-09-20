#include "main.h"
#include <stdio.h>

/**
 *print_array-prints elements of an array of an enteger
 *@a: array
 *@n: number of elements of the array
 *Return: void
 */
void print_array(int *a, int n)
	{
		int inc;

		for (inc = 0; inc < n; inc++)
		{
			printf("%d", a[inc]);

			if (inc != (n - 1)
					{
					printf(",");
					}
		}
		printf("\n");
	}
