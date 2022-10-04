#include "main.h"i
#include <stdlib.h>
/**
 * _strdup-function that returns a pointer to a newly allocated
 * space in memory, which contains
 * copy of the string given as a parameter
 * @str:string to be copied
 *
 * Return:NULL in case of erro
 */
char *_strdup(char *str)
	{
		char *cpy;
		int index, len;

		if (str == NULL)
			return (NULL);
		len = 0;
		while (str[len] != '\0')
		{
			len++
		}
		cpy = malloc(sizeof(char) * (len + 1));

		if (cpy == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < len; i++)
		{
			cpy[i] = str[i];
		}
		cpy[len] = '\0';
		return (cpy);
	}
