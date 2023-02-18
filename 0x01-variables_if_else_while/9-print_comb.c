#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');

		/*don't miss the if portion*/
		/**
		 * if you do your output will be
		 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
		 * notice the comma at the end of 9
		 * we don't want that so yk
		 */
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
