#include "main.h"

/**
 * _strcat-concentrates two strings
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
	{
		int len = 0, dest_len = 0;

		while (dest[len])
		{
			len++;
		}

		for (dest_len = 0; src[dest_len]; dest_len++)
		{
			dest[len] = src[dest_len];
			len++;
		}

		dest[len] = '\0';
		return (dest);
	}
