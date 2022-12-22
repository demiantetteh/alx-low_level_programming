#include "main.h"

/**
 * reverse_array - reverses the contents ofan array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
