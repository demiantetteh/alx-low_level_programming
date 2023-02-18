#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints the alphabet in a lower case followed by a new line
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char x;

	x = 'a';

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
