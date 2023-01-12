#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _realloc - Reallocates memory to a memory block
 * @old_size: The sizw of the allocated space for ptr
 * @new_size: The size for the new memory
 * @ptr: A pointer to the memory previously allocated
 *
 * Return:If new_size == old_size - ptr.
 *	If new_size == 0 and ptr is not NULL - NULL
 *	Otherwise - a pointer to the to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigne int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (NULL);

	new_ptr = malloc(new_size);

	if (new_size == NULL)
		return (NULL);

	min_size = old_size < new_size ? old_size : new_size;

	memcpy(new_ptr, ptr, min_size);

	free(ptr);
	return (new_ptr);
}
