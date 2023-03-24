#include "main.h"

/**
 * print_triangle - print a triangle using multiple terminal lines and #'s.
 * @size: the number of # to print in each line.
 */

void print_triangle(int size)
{
int i, j;

	if (size > 0)
	{
		j = 1;
		while (j <= size)
		{
			i = size;
			while (i >= 1)
			{
				if (j < i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				i--;
			}
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
