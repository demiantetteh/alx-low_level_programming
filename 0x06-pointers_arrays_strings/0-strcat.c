#include "main.h"
#include <string.h>

/**
 * *_strcat - appends @src to @dest
 * @src:  variable to be appended from
 * @dest:  variable to be appended to
 * Return: dest (success)
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
