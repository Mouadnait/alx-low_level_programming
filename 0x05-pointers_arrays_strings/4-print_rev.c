#include "main.h"

/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (s[i] >= 0)
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
