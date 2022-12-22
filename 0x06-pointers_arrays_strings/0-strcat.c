#include "main.h"

/**
 * *_strcat - appends @src to @dest
 * @src:  variable to be appended from
 * @dest:  variable to be appended to
 * Return: dest (success)
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
