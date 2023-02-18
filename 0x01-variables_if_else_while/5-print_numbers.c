#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints all single numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
