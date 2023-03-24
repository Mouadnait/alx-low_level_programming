#include "main.h"

/**
 * print_diagonal - draws a diagonal line (n) characters long.
 * @n: the number of underscores to print.
 */

void print_diagonal(int n)
{
	int j;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			i = j;
			while (i--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
