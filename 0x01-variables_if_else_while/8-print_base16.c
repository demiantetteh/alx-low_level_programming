#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints all the numbers of base 16 in lowercase
 *		followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 15; x++)
	{
		if (x <= 9)
			putchar(x + '0');
		else
			putchar(x - 10 + 'a');
	}
	putchar('\n');

	return (0);
}
