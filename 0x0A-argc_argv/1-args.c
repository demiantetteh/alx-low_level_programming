#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: Number of arguments used on command line
 * @argv: Arguments used on command line
 *
 * Return: 0 is always success
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
	}

	return (0);
}