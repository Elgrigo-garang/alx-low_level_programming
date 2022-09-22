#include "main.h"

/**
 *_strcmp-function that compares two strings
 *@s1:pointer to the first string
 *@s2: pointer to the second string
 *
 *Return: if str1 < str2, negative differce of the first unmatched char.
 *if str1 == str2, 0.
 *if str1 > str2, the positive difference of the first unmatched char
 *
 *
 */
int _strcmp(char *s1, char *s2)
	{
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		return (*s1 - *s2);
	}
