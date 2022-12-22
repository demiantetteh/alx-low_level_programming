#include "main.h"
#include <string.h>

/**
 * *_strncat - appends n characters from src to dest
 * @dest: n characters to be appended to
 * @src: n characters to be appended from
 * @n: amount of characters to be used for appending
 * Return: dest (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
