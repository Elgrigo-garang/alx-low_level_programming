#include "main.h"
/**
 *print_line-print a diogonal line on the terminal
 *@n: the number of \ character to be drawn
 *
 */
void print_line(int n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			int line, gap;

			for (line = 0; line < n; line++)
			{
				for (gap = 0; gap < n; gap++)
				{
					if (line == gap)
					{
						_putchar('\\');
					}
					else if (gap < line)
					{
						_putchar(' ');
					}
				}
				_putchar('\n');
			}
		}
	}
