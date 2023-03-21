#include "main.h"

/**
 * jack_bauer - prints time table in this format: HH:MM
 * Return: the sum of two numbers.
 */

void jack_bauer(void)
{
	int sn, ln;

	for (sn = 0; sn <= 23; sn++)
	{
		for (ln = 0; ln <= 59; ln++)
		{
			_putchar('0' + (sn / 10));
			_putchar('0' + (sn % 10));
			_putchar(':');
			_putchar('0' + (ln / 10));
			_putchar('0' + (ln % 10));
			_putchar('\n');
		}
	}
}
