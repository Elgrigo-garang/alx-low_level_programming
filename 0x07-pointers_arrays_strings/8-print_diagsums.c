#include "main.h"
/**
 *print_diagsums-function that prints the sum of the two diagonals
 *@a:2d array of char
 *@size:number matrix
 *
 * Return:void
 */
void print_diagsums(int *a, int size)
	{
		int i;
		int sum1, sum2;

		sum1 = 0;
		sum2 = 0;

		i = 0;
		while (i < size)
		{
			sum1 = sum1 + *(a + i * size + i);
			sum2 = sum2 + *(a + i * size - i - 1);
			i++;
		}
		printf("%i, %in", sum1, sum2);
	}
