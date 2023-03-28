#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string to reverse.
 */
void rev_string(char *s)
{
	int i, j;
	char tmp[500];

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
	s[j] = '\0';
}
