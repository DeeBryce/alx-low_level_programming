#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees the dog
 * @d: pointer to dog to free
 *
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
