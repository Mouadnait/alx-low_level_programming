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
	char c = 'a';
	char ch = 'A'

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
