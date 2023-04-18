#include <stdio.h>

#ifndef PRINT_FILE
#define PRINT_FILE printf("%s\n", __FILE__)
#endif

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	PRINT_FILE;
	return (0);
}
