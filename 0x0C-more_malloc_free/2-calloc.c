#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - alloocates memory for an array
 * @nmemb: the number of elements
 * @size: the size of bytes.
 *
 * Return: NULL if size or nmemb is 0
 *		NULL if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	char *t;
	unsigned int i;

	s = malloc(nmemb * size);

	if (size == 0 || nmemb == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	free(s);

	return(s);
