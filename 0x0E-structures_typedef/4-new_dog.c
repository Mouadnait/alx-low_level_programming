#include "dog.h"

/**
 * _strcopy - copy read only data to mutatable.
 * @dst: pointer to copy char to.
 * @src: read only data.
 */
void _strcopy(char *dst, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dst[i] = src[i];
	dst[i] = '\0';
}

/**
 * new_dog - create new dog from the dna of the first dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len, owner_len;

	name_len = owner_len = 0;
	while (name[name_len++])
		;
	while (owner[owner_len++])
		;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(name_len + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(owner_len + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcopy(d->name, name);
	_strcopy(d->owner, owner);
	d->age = age;
	return (d);
}
