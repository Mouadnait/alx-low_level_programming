#include "main.h"
/**
 * puts_half - Prints out the first half of a string.
 * @str: input string to print.
 */

void puts_half(char *str)
{
	int i, j, l, n;

	i = 0;
	while (str[i])
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2;
		for (l = n; l < i; l++)
		{
			_putchar(str[l]);
		}
	}
	else
	{
		n = (i - 1) / 2;
		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
