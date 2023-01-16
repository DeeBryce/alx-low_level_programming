#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees the dog
 * @d: pointer to dog to free
 * Return: void
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
