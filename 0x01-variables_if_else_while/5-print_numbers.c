#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = '0'; x < 10; x++)
	{
		printf("%d\n", x);
	}
	putchar('\n')
	return (0);
}
