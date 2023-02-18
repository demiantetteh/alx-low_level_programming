#include <stdio.h>

/**
 * main - Point of entry
 * Desc: Prints lowercase alphabets in reverse, followed by a newline
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');

	return (0);
}
