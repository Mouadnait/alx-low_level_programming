#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char _putchar(char c)
{
	char s[] = "_putchar";
	int i = 0;

	for (i; i <= strlen(s); i++)
	{
		_putchar("%c", s[i]);
	}
	_putchar("\n");

	return (0);
}
