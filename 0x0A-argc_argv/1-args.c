#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: Number of arguments used on command line
 * @argv: Arguments used on command line
 *
 * Return: 0 is always success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
