#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints all possible different combinations of two digits.
 *
 * Return: Always 0(sucess)
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
			/**
			 * y = x + 1 to make sure that one number is always
			 * greater than the other to avoid having a pair
			 * of same number
			 */
		{
			putchar(x + '0');
			putchar(y + '0');
			/**
			 * The combination ends at 89 and that's the reason
			 * for the if statement
			 * The numbers are 0 to 9. therefore there are 10 x 9 = 90
			 * combinations including 00. but we are posed to take
			 * same numbers out. eg 00, 11, 33 etc and that's why
			 * we set y = x + 1, so that the number would always be
			 * greater than the other.
			 */
			if (x < 8 || y < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
