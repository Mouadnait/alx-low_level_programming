#include "main.h"

/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print.
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
