#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14
 * ten times in a row
 * Return: void is success
 */

void more_numbers(void)
{
	int rows = 0;
	int num;

	while (rows <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
			_putchar('\n');
		}
		rows++;
		_putchar('\n');
	}
}
