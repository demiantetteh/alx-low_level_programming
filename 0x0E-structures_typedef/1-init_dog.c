#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialises a variale of type struct dog
 * @d: The dog to be initialised
 * @name: Name of the dog to be initialised
 * @age: Age of the dog to be initialised
 * @owner: Owner of the dog that was initialised
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
