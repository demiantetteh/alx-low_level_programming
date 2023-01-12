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
	int *s, i, arrsize;

	if (min > max)
		return (NULL);

	arrsize = max - min + 1;

	s = malloc(arrsize * sizeof(int));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < arrsize; i++)
		s[i] = min++;

	return (s);
}
