#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		char small = tolower(ch);
		putchar(small);
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
