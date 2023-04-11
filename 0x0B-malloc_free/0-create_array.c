#include "main.h"
/**
 * create_array - creates and initializes an array of chars with char c
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char*) malloc((size + 1) * sizeof(int));

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
		array[i] = '\0';
	}
	else
		return (NULL);
	return (array);
}
