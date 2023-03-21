#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 * main - check the code
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
