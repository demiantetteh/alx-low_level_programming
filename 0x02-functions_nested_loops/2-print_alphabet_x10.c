#include "main.h"

/**
 * print_alphabet_x10
 *
 * Description: Prints 10 times the alphabets, in lowercase
 *
 * Return - void
 */

void print_ alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
