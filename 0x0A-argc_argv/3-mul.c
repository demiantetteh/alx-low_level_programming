#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers from console in atoi form
 * @argc: argument count
 * @argv: arguments used in console
 *
 * Return: 0 if argc is more than 3
 *		1 if argc is less than 3
 */

int main(int agrc, char *argv[])
{
	int n1, n2, product;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);

		product = n1 * n2;

		printf("%d\n", product);

		return (0);
	}
}
