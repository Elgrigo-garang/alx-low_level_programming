#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++
	}
	return (1);
}
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
	{
		int sum = 0, i;

		if (argc > 1)
		{
			for (i = 1; i < argc; i++)
			{
				int b;
				char *str;

				str = argv[i];
				for (b = 0; str[b] != '\0'; b++)
				{
					if (str[b] < 48 || str[b] > 57)
					{
						printf("ERROR\n");
						return (1);
					}
				}
			}
		}
		for (i = l; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
