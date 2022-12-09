#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu.\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(long int));
	printf("Size of long long int: %lu.\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(float));

	return (0);
}
