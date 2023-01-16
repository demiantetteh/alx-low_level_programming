#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees(memory allocated) dogs
 * @d: The dog to be freed.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);

	if (d == NULL)
		return;
}
