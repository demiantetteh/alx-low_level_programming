#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Description: Header file that defines a struct to be used for
 *		different dogs
 */

/**
 * struct dog - The struct describing the details for the dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: this strict makes all the members available to
 * gather info on different types of dogs.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
