#include "main.h"

/**
 * _isupper -  display 1 if the alphabet, in uppercase
 * @c: parameter
 * Return: 1 if c is uppercase else 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
