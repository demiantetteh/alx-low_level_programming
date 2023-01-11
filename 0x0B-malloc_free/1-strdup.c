#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 *		in memory, which contains of copy of the
 *		give string as a parameter.
 * @str: THe string to be used.
 *
 * Return: NULL if str = NULL || insufficient memory
 *		or a pointer to the duplicated string(success).
 */

char *_strdup(char *str)
{
	char *s = malloc(sizeof(str));

	s = str;

	if (str == NULL)
		return (NULL);

	free(s);

	return (s);
}
