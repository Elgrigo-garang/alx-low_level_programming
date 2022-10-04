#include "main.h"
#include <stdio.h>
/**
 * alloc_grid-function that returns a pointer
 * @width:size of width
 * @height:size of height
 *
 * Return:always 0 (success)
 */
int **alloc_grid(int width, int height)
	{
		int i, j, k, l;
		int **a;

		if (width <= 0 || height <= o)
			return (NULL);
		a = malloc(sizeof(int *) * height);

		if (a == NULL)
		{
			free(a);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			a[i] = malloc(sizeof(int) * width);
			if (a[i]  == NULL)
			{
				for (j = i; j >= 0; j--)
				{
					free(a[j]);
				}
				free(a);
				return (NULL);
			}
		}
		for (k = 0; k < height; k++)
		{
			for (l = 0; l < width; l++)
			{
				a[k][l] = 0;
			}
		}
		return (0);
	}
