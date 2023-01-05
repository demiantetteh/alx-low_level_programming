#include "main.h"

/**
 * _pow_recursion - Returns the value of an integer raised
 * to the power of another integer
 * @x: The base integer.
 * @y: The exponent integer.
 * Return: if y < 0 - -1
 *	if y == 0 - 0
 *	value of x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
