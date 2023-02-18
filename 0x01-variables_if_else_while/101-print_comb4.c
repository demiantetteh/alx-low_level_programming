#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints all possible different combinations of three digits
 *		excepts ones with same numbers eg. 111,333 etc
 *		and also no.s such as 121, 112, 102,120
 *		we'll have our inner for loops to check for that
 * Return: Always 0(success)
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
		for (y = x + 1; y < 10; y++)
			for (z = y + 1; z < 10; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x < 7 || y < 8 || z < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');

	return (0);
}
