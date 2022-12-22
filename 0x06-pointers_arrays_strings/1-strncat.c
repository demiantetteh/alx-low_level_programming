#include "main.h"

/**
 * *_strncat - appends n characters from src to dest
 * @dest: n characters to be appended to
 * @src: n characters to be appended from
 * @n: amount of characters to be used for appending
 * Return: dest (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
