#include "main.h"

/**
 * _memcpy - Copies a block of memory
 * @dest: Pointer to the destination memory
 * @src: Pointer to the source memory
 * @n: The number of bytes to copy
 *
 * Returns: A pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

