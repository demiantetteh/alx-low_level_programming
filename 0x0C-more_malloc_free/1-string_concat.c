#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the string to be copied
 * @s2: the string to be appended to the copied string
 * @n: the number of bytes
 *
 * Return: the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, i, len2;
	char *result;
	len1 = 0, i = 0, len2 =0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculating the length of s1 and s2*/
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	if (n >= len2)
	{
		result = malloc(len1 + len2 + 1);

		if (result == NULL)
			exit(1);

		for (i = 0; i < len1; i++)
			result[i] = s1[i];
		for (i = 0; i < len2; i++)
			result[i + len1] = s2[i];
		result[len1 + len2] = '\0';
		return (result);
	}
	else
	{
		result = malloc(len1 + n + 1);

		if (result == NULL)
			exit(1);
		for (i = 0; i < len1; i++)
			result[i] = s1[i];
		for (i = 0; i < n; i++)
			result[i + len1] = s2[i];
		result[len1 + n] = '\0';
		return (result);
	}
}
