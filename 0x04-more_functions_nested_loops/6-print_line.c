#include <stdio.h>
#include "main.h"

/**
 * print_line - prints underscores and newlines depending on n
 * @n: the variable that determines the number of underscores
 * Return: void is success
 */

void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
			_putchar('_');
	}
	_putchar('\n');
}
