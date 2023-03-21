#include "main.h"

/**
 * _islower -  display 1 if the alphabet, in lowercase
 * @c: parameter
 * Return: 1 if c is lowercase else 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
