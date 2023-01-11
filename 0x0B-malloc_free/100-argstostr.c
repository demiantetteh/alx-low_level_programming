#include <stdliib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: The argument count
 * @av: The arguments passed
 * Return: Null if ac == 0 || av == Null
 *		pointer used (success)
 */

char *argstostr(int ac, char **av)
{
	int i;
	char *result;
	int result_index;
	int total_length;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]);

	result = (char *) malloc((total_length + ac + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	result_index = 0;

	for (i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
		{
			result[result_index] = av[i][j];
			result_index++;
		}
		result[result_index] = '\n';
		result_index++;
	}

	result[result_index - 1] = '\0';

	return (result);
}
