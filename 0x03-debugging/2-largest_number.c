#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: theird integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b)
	{
		largest = a;
	}
	if (c > b)
	{
		largest = c;
	}
	if (a > c)
	{
		largest = a;
	}
	return (largest);
}
