#include "main.h"

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if the integer is a prime number
 *		0 if otherwise.
 */

int is_prime_number(int n)
{
	if ((n / n == 1) && (n / 1 == n))
		return (1);
	else if ((n / n != 1) && (n / 1 != n))
		return (0);
	else
		return (0);
}
