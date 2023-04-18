#include "dog.h"

/**
  * free_dog - frees any memory allocated by dog.
  * @d: pointer to struct
  * Return: what does it return?
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
