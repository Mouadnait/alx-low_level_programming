#include "main.h"
/**
 * print_rev - prints a given string in reverse
 * @str: the string
 */
void rev_string(char *s)
{
	int i, j;
	char tmp[1000];

	i = j = 0;
	while (s[i])
	{
		tmp[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[j] = tmp[i];
		i--;
		j++;
	}
	s[j]='\0';
}
