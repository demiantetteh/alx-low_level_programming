#include <stdio.h>

/**
 * main - prints numbers form 1 to 100 but for multiples
 * of 3 it prints fizz instead and for multiples
 * of 5 it prints buzz but for multiples of both
 * 3 and 5 it prints fizzbuzz
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz");
		}

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
	}
	printf("\n");

	return (0);
}
