#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of the string pointed to by str1 that consist only of bytes from the string pointed to by str2.
 * @s: The string to search.
 * @accept: The string of bytes to search for.
 *
 * Returns: The number of bytes in s that consist of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

