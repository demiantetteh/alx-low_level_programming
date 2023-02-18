#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints single digit numbers of base 10 starting from 0
 *		without using any variable of type char
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		putchar(x + '0');
	putchar('\n');

	return (0);
}
