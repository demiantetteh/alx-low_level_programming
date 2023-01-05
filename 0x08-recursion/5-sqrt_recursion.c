#include "main.h"

int find_sqrt(int num, int root);
/**
 * find_sqrt - Finds the natural square root of a number
 * @num: The number to find the square root of.
 * @root: The root tobe tested.
 *
 * Return: If the number has a natural square root - the square root.
 *		If the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of an integer
 * @n: The number for which the operation is done
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
