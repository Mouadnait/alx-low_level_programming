#include "dog.h"

/**
 * print_dog - check the code.
 * @d: pointer
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name;
		char *owner;

		if (d->name != NULL)
		{
			name = malloc(strlen(d->name) + 1);
			if (name != NULL)
			{
				strcpy(name, d->name);
				printf("Name: %s\n", name);
			}
			else
				printf("Name: (nil)\n");
		}

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
		{
			owner = malloc(strlen(d->owner) + 1);
			if (owner != NULL)
			{
				strcpy(owner, d->owner);
				printf("Owner: %s\n", owner);
			}
			else
				printf("Owner: (nil)\n");
		}
	}
}
