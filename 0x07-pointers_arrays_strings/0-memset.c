#include "main.h"

/**
 * _memset - Fills memory block with a constant value
 * @s: starting address memory to be filled
 * @b: constant value
 * @n: number of bytes to be filled
 * Return: s (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
