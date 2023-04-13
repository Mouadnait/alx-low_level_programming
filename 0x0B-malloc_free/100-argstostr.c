#include "main.h"
/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate total length of all arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		/* add space for newline */
		total_len += len + 1;
		len = 0;
	}
	/* allocate memory for string */
	str = (char *)malloc(total_len * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	/* concatenate arguments into string with newlines */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*str++ = av[i][j];
		*str++ = '\n';
	}
	/* terminate string with null character */
	*str = '\0';

	/* return pointer to start of string */
	return (str - total_len);
}
