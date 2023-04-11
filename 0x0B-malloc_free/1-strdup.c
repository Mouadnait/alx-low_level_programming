#include "main.h"
/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
	char *str_arr;
	unsigned int i;

	str_arr = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < strlen(str) + 1)
	{
		str_arr[i] = str[i];
		i++;
	}
	str_arr[i] = '\0';

	return (str_arr);
}
