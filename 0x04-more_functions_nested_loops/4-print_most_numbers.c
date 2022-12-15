#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 with the
 * excetion of 2 and 4 followed by a new line
 * Return: void is success
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
