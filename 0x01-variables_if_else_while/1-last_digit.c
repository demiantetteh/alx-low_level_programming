#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int n, rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;
	/* your code goes there */
	if (rem > 5)
		printf("Last digit of %d is %d and is greater than 5", n, rem);
	if (rem == 0)
		printf("Last digit of %d is %d and is 0", n, rem);
	if ((rem < 6) && (rem != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0", n, rem);
	printf("\n");
	return (0);
}
