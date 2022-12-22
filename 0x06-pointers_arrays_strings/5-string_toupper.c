#include "main.h"

/**
 * string_toupper - Converts all lowercase letters
 *			of a string to uppercase
 * @str: The pointer to be changed.
 * Return: A ponter to the changed string.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
