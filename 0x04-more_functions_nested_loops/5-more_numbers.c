#include "main.h"

/**
 * more_numbers - prints the range 0-14 ten times.
 * Return: nothing.
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
			++j;
		}
		++i;
		_putchar('\n');
	}
}
