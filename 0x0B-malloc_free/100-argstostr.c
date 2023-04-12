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

		total_len += len + 1; /* add space for newline */
		len = 0;
	}

	str = (char *)malloc(total_len * sizeof(char)); /* allocate memory for string */

	if (str == NULL)
		return (NULL);

	/* concatenate arguments into string with newlines */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*str++ = av[i][j];
		*str++ = '\n';
	}
	*str = '\0'; /* terminate string with null character */

	return (str - total_len); /* return pointer to start of string */
}
