#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * array_range - creates an array and sorts them
 * @min: The array thats smaller
 * @max: The array thats greater
 *
 * Return: Pointer to array
 *	 NULL if malloc fails || min > max
 */

int *array_range(int min, int max)
{
	int size, i;
	int *array;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	array = (int *) malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + 1;

	return (array);
}
