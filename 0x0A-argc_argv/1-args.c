#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the programm
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
	{
		(void) argv;

		printf("%i\n", argc - 1);
		return (0);
	}
