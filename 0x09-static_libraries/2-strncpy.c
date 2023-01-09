#include "main.h"

/**
 * *_strncpy - Copies n characters from a source string to the
 * destination string.
 * @dest: The buffer storing the string copy
 * @src: The source of the string
 * @n: the max number of bytes copied from src
 * Return: dest (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
