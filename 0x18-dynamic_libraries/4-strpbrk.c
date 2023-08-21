#include "main.h"
/**
 * _strpbrk - Locates the first occurrence of any of the characters in accept in the string s.
 * @s: The string to search.
 * @accept: The string of characters to search for.
 *
 * Returns: A pointer to the first occurrence of any of the characters in accept in the 
 * string s, or NULL if no such occurrence is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}

