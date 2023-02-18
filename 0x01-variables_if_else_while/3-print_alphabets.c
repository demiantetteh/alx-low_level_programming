#include <stdio.h>

/**
 * main - Entry point
 * Desc:  prints the alphabet in lowercase, and then in uppercase
 *		followed by a new line.
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char x, y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');

	return (0);
}
