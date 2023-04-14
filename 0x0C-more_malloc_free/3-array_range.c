#include "main.h"
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to array of integers
  */
int *array_range(int min, int max)
{
	int *arr;
	int b;

	if (min > max)
		return (NULL);
	b = max - min;

	arr = malloc(sizeof(int) * (b + 1));
	if (!arr)
		return (NULL);
	while (max > min)
	{
		arr[b] = max;
		b--;
		max--;
	}
	arr[b] = min;
	return (arr);
}
