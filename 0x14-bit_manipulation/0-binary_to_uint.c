#include "main.h"

/**
 * binary_to_uint - function that convert a binary number to an unsigned int
 * @b: string to convert.
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, index;

	if (!b || !*b)
		return (0);

	num = index = 0;
	while (b[index])
	{
		if (b[index] > 49)
			return (0);
		else if (b[index] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		index++;
	}
	return (num);
}
