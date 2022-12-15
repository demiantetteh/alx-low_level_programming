#include <stdio.h>
#include "main.h"

/**
 * print_line - prints underscores and newlines depending on n
 * @n: the variable that determines the number of underscores
 * Return: void is success
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('_');
}
