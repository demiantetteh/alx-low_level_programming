#include "main.h"

/**
 * _strlen_recursion - Outputs the length of a string
 * @s: The string to be used
 *
 * Return: length.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
