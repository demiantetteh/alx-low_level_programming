#include <stdio.h>
#include "main.h"

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *	that are multiples of 3 or 4.
 *
 * Return: Always 0 .
 */
int main(void)
{
	int i, sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i
		}
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
