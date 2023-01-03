#include "main.h"

/**
 * *_memcpy -  copies a block of memory area
 * @src: source for memory area
 * @dest: destination of copied memory area
 * @n: Length of source
 *
 * Return: (dest) success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
