/*
 * File : 4-isalpha.c
 *
 */
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: the character to be checked.
 *
 * Return: 1 if character is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
