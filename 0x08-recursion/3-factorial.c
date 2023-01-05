#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The number to be used
 *
 * Return: If n > 0 - the factorial of n
 *		if n < 0 - -1 to indicate the error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
