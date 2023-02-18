#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints the alphabets in lowercase
 *	except for q and e
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
			continue;
		else
			putchar(x);
	}
	putchar('\n');

	return (0);
}
