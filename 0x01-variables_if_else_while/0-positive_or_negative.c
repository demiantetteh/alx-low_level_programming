#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry Point
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("is postive\n");
	if (n == 0)
		printf("is zero\n");
	if (n < 0)
		printf("is negative\n");
	printf("\n");
	return (0);
}
