#include "main.h"
#include <stdio.h>
/**
 * _strcpy-function that copies string
 * @dest:destination
 * @src:source
 *
 * Return:the pointer to destination
 */
char *_strcpy(char *dest, char *src)
	{
		int i;

		for (i = 0; src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		dest[i++] = '\0';

		return (dest);
	}
