#include "main.h"

/**
 * Checks if a character is alphabetic.
 *
 * Returns: 1 if the character is alphabetic, 0 otherwise.
 *
 * @param c The character to check.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

