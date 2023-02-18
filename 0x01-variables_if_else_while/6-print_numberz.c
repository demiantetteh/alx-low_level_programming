#include <stdio.h>

/**
 * main - Entry point
 * Desc: Prints single digit numbers of base 10 starting from 0
 *		without using any variable of type char
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		/**
		 * putchar is unable to read integers
		 * you can enter most of its values as ascii
		 * so here we wanted to output the value of x starting from 0
		 * ascii for 0 is 48
		 * so its adds the value of x to move to the corresponding
		 * ascii value to print it out
		 * VOILA
		 */
		putchar(x + '0');
	putchar('\n');

	return (0);
}
