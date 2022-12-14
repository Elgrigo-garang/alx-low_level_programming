#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int printf(const char *format, ....)
{
	write(1,"0 8 10 24 75 + 9\n", 17);
	write(1, "congratulation, you won the jackpot\n", 38);
	exit(EXIT_SUCCESS);
}
