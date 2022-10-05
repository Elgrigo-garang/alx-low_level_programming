#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int word_len(char *str);
int count_words(char *str);
char **strow(char *str);
/**
 * word_len-locates the index marking the end
 * of the firstword contained within a string
 * @str:string searched
 *
 * Return:index marking the end of initial word pointed to by str
 */
int word_len(char *str)
	{
		int index = 0, len = 0;

		while (*(str + index) && *(str + index) != ' ')
		{
			len++;
			index++;
		}
		return (len);
	}
/**
 * count_words-counts the number contained in string
 * @str:string to be searched
 *
 * Return:numbers of words contaid in string
 */
int count_words(char *str)
	{
		int index = 0, words = 0, len = 0;

		for (index = 0; *(str + index); index++)
			len++;
		for (index = 0; index < len; index++)
		{
			if (*(str + index) != ' ')
			{
				words++;
				index += word_len(str + index);
			}
		}
		return (words);
	}
/**
 * strow-splits strings into words
 * @str:
 *
 * Return:if str = NULL, str = "", or the function fails - NULL
 * otherwise - a pointer to an array of strings (words)
 */
char **strow(char *str)
	{
		char **strings;
		int index = 0, words, w, letters, l;

		if (str == NULL || str[0] == '\0')
			return (NULL);
		words = counts_words(str);
		if (words == 0)
			return (NULL);
		strings = malloc(sizeof(char *) * words + 1);
		if (strings == 0)
			return (NULL);
		for (w = 0; w < words; w++)
		{
			while (str[index] == " ")
				index++;
			letters = word_len(str + index);
			strings[w] = malloc(sizeof(char) * (letters + 1));
			if (strings[w] == NULL)
			{
				for (; w >= 0; w--)
					free(strings[w]);
				free(strings);
				return (NULL);
			}
			for (l = 0; l < letters; l++)
				strings[w][l] = str[index++];
			strings[w][l] = '\0';
		}
		strings[w] = NULL;
		return (strings);
	}
