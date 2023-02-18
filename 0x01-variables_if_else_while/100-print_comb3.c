#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints all possible different combinations of two digits.
 *
 * Return: Always 0(sucess)
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x && y;
			if (x == y)
				continue;
			putchar(z + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
