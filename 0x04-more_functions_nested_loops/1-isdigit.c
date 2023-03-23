#include "main.h"

/**
 * _isdigit -  display 1 if the value is digit
 * @c: parameter
 * Return: 1 if c is digit else 0
 *
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
