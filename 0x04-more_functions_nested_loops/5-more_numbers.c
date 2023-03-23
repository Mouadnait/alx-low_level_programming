#include "main.h"

/**
 * more_numbers - prints the range 0-14 ten times.
 * Return: nothing.
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			}
			else
			{
				_putchar(j + 48);
			}
		}
		++i;
		_putchar('\n');
	}
}
