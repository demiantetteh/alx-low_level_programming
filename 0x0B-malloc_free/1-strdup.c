#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

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
	char *s = malloc((strlen(str) + 1) * sizeof(char));


	if (str == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);

	strcpy(s, str);

	free(s);

	return (s);
}
