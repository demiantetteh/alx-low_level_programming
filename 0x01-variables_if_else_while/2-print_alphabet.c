#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int C;
	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
		putchar('\n');
	}
	return (0);
}
