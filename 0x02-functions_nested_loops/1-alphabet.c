#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description - prints lowercase alphabets
 * 
 * Return - void
 */

void print_alpahbet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
}
