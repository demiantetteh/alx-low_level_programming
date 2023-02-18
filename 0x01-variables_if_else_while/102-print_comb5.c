#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints all possible combinations of two two-digit numbers.
 *		the range is from 0 to 99
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			/*print first number*/
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');

			/*print separator*/
			putchar(' ');

			/*print second number*/
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			/*print comma and space if not last combination*/
			if (i != 99 || j == 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
