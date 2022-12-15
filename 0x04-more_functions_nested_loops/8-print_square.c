#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a a sized square with caharacter #
 * @size: The size of the square
 */

void print_square(int size)
{
	int height;
	int width;

	if (size > 0)
	{
		for (height = 0; height < size; size++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');

			if (height == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
