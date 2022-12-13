#include "main.h"

/**
 * main - Entry point
 *
 * Description - prints the word _putchar \n
 *
 * Return - Always 0 (success)
 */

int main(void)
{
	char word[] = "_putchar \n";
	int i = 0;

	while(word[i] != '\0')
	{
		char c = word[i];

		_putchar(c);
		i++;
	}
	return (0);
}
