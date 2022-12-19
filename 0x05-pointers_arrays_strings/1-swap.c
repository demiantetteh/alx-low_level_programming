#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: pointer to be swapped
 * @b: pointer to be swapped
 * Return: void (success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
