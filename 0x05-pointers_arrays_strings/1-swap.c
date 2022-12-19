#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: pointer to be swapped
 * @b: pointer to be swapped
 * Return: void (success)
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;
	int temp;

	temp = i;
	i = j;
	j = temp;
}
