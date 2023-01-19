#include <stdio.h>
#include <stdlib.h>
#include "3-clac.h"

/**
 * main - performs simple operations on integers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success, 98 if the number of arguments is wrong, 99 if
 *		the operator is none of the above, 100 if the user tries
 *		to divide by 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	
	}

	printf("%dn", op_func(num1, num2));
	return (0);
}
