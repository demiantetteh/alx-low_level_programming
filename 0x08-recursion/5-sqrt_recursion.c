#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of an integer
 * @n: The number for which the operation is done
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (n * _sqrt_recursion(n - 1));
}
