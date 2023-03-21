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

	last_digit = (n % 10) + '0';
	_putchar(last_digit);
	return (n % 10);
}
