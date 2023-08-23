#include "main.h"

/**
 * * _memset - Fills a block of memory with a specific value
 * @s: Pointer to the start of the memory to be filled
 * @b: The desired value
 * @n: The number of bytes to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

