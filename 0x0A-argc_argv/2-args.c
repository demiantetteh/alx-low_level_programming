#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments the console receives
 * @argc: argument count
 * @argv: arguments used in the console
 *
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
