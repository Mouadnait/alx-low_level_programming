#include "main.h"
/**
  * malloc_checked - allocates memory using malloc
  * @b: size of buffer
  * Return: pointer to buffer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}