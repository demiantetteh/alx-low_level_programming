#include <stdio.h>
#include "main.h"

/**
 * print_digonal - Prints \ depending on a variable
 * @n: The number of \ to be printed
 * Return: void success
 */

void print_diagonal(int n)
{
	int a;
	int spaces;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (spaces = 0; spaces < a; spaces++)
				_putchar(' ');
			_putchar('\\');

			if (a == n - 1)
				continue;

			_putchar('\n');
		}
	}
	
	_putchar('\n');
}
