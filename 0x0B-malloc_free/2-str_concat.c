#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new buffer containing s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *new_array;
	int len_s1, len_s2, sizeBuffer, i;

	/*Check for valid strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	sizeBuffer = len_s1 + len_s2 + 1;
	new_array = malloc(sizeBuffer * sizeof(char));

	if (new_array == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer; i++)
		i < len_s1 ? (new_array[i] = s1[i]) : (new_array[i] = s2[i - len_s1]);
	return (new_array);
}
