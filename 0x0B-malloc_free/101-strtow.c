#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: the string to be used
 *
 * Return: Null if str == null || str == "" or if function fails
 */

char **strtow(char *str)
{
	char **result;
	char *token;
	int count;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	result = NULL;
	token = strtok(str, "");
	count = 0;

	while (token != NULL)
	{
		result = realloc(result, sizof(char *) * (count + 1));
		result[count] = token;
		count++;
		token = strtok(NULL, " ");
	}

	result = realloc(result, sizeof(char *) * (count + 1));
	result[count] = NULL;
	return (result);
}
