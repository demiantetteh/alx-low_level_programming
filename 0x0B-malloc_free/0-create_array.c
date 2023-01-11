#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it
 *			with a specific char.
 * @size: size of the array.
 * @c: The character to be printed
 *
 * Return: 0 if program is success
 *		NULL if size = 0 || program fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	int i;

	if (size == 0)
		return (NULL);
	else if (arr == NULL)
		return (NULL);

	for (i = 0; i < (int) size; i++)
	{
		arr[i] = c;
		i++;
		free(arr);
	}

	return (0);
}
