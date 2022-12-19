#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to be checked for length
 * Return: length of the string (success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
