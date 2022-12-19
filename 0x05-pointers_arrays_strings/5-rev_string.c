#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int size = sizeof(s) / sizeof(s[0]);

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; i < size - i - 1; j++)
		{
			int temp = s[j];

			s[j] = s[j + 1];

			s[j + 1] = temp;
		}
	}
}
