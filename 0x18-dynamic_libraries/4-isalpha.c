#include "main.h"

/**
 *_isalpha - Checks if a character is alphabetic.
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 *
 * @c: The character to check.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

