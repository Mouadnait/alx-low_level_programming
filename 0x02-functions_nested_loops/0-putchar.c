#include "main.h"

/**
 * main - check the code
 *
 * _putchar - writes the character c to stdout
 *
 * Return: Always 0.
 */

int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	return (0);
}
