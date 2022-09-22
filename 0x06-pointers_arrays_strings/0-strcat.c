#include "main.h"

/**
 * _strcat-concentrates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: character
 */
char *_strcat(char *dest, char *src)
	{
		int len = 0, dest_len = 0;

		while (dest[len++])
		{
			dest_len++;
		}

		for (len = 0; src[index]; len++)
		{
			dest[dest_len++] = src[index];
			len++;
		}

		dest[len] = '\0';
		return (dest);
	}
