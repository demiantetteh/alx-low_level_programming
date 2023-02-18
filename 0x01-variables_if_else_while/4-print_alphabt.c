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
		if (x == 'q' || 'e')
			continue;
		else
			putchar(x);
	}

	return (0);
}
