#include "main.h"

/**
 * _strlen_recursion - Outputs the length of a string
 * @s: The string to be used
 *
 * Return: length.
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (1);
	_strlen_recursion(s + 1);
	return (_strlen_recursion(s));
}

