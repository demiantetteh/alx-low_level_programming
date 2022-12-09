#include <stdio.h>
#include <unistd.h>

/**
 * Description - Printing numbers from 0 to 9 using putchar
 */
int main(void)
{
	int x;

	for (x = 0; x <= 10; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
