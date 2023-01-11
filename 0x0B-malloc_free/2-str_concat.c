#include <stdio.h>
#include <stlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - points to a newly allocated space in memory which
 *		contains the contents of s1, followed by the contents
 *		of s2, and null terminated.
 * @s1: The string to be copied.
 * @s2: The string to be appended after s1 is copied.
 *
 * Return: Pointer (success) or Null if program fails
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	char *s;

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	len = len1 + len2 + 1;

	/* 1 is for the null character*/

	s = malloc(len * sizeof(char));

	if (s == NULL)
		return (NULL);

	strcpy(s, s1);
	strcat(s, s2);

	return (s);
}
