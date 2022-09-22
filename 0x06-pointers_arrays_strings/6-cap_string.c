#include "main.h"
/**
 * _strlen- returns the length of a string
 * @s :string
 * Return:return length as integer
 */
int _strlen(char *s)
	{
		int len = 0;

		while (*(s + len) != '\0')
			len++;

		return (len);
	}
/**
 * cap_string-changes all lowercase letters of a string to uppercase
 * @str : string
 * Return: return capitalized string
 *
 */
char *cap_string(char *str)
	{
		int i = 0;

		while (str[++i])
		{
			while (!(str[i] >= 'a') && (str[i] <= 'z'))
				i++;
			if (str[i - 1] == ' ' ||
					str[i - 1] == '\t' ||
					str[i - 1] == '\n' ||
					str[i - 1] == ',' ||
					str[i - 1] == ';' ||
					str[i - 1] == '.' ||
					str[i - 1] == '!' ||
					str[i - 1] == '?' ||
					str[i - 1] == '"' ||
					str[i - 1] == '(' ||
					str[i - 1] == ')' ||
					str[i - 1] == '{' ||
					str[i - 1] == '}')
				str[i] -= 32;
		}
		return (str);
	}
