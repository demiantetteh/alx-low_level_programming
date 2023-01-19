#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success, 1 if the number of arguments is wrong, 2 if
 *		the number of bytes is negative.
 */

int main(int argc, char *argv[])
{
	int i, n;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (char*)(void*)(&main);
	for (i = 0; i < n; i++)
		printf("%02x ", (unsigned char)*(main_ptr + i));
	printf("\n");
	return (0);
}
