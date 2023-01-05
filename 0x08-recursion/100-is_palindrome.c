#include <string.h>
#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome -1.
 *		If the string is not a palindrome - 0.
 */

int is_palindrome(char *s)
{
	if (strrev(s) == s)
		return (1);
	else
		return (0);
}
