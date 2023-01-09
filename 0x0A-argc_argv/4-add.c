#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers and prints them
 * @argc: The count of arguments passed
 * @argv: The arguments passed
 *
 * Return: 1 if numbers contains symbols that are non digits
 *		0 -if otherwise
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int n1, n2, sum = 0;

	for (n1 = 1; n1 < argc; n1++)
	{
		for (n2 = 0; argv[n1][n2]; n2++)
		{
			if (argv[n1][n2] < '0' || argv[n1][n2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}

	printf("%d", sum);

	return (0);
}
