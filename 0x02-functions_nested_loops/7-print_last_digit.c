#include "main.h"

/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */

int print_last_digit(int n)
{
	if (n < 0)
		return (n * (-1));

	_putchar((n % 10) + 48);
	return (n % 10);
}
