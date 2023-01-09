#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through to 9
 * @c: variable that will be checked
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
