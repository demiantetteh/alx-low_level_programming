#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Printing alphabets in lowercase and then in upper case
 *
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
