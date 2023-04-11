#include "main.h"

char *_strdup(char *str)
{
	char *str_arr;
	unsigned int i;

	str_arr = (char *) malloc(strlen(str) * sizeof(char));

	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < strlen(str))
	{
		str_arr[i] = str[i];
		i++;
	}
	str_arr[i] = '\0';

	return (str_arr);
}
