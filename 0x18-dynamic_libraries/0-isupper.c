#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to check
 *
 * Return: 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
/* Returns 1 if c is an uppercase letter, 0 otherwise. */
}

