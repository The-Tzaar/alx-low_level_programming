#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 *
 * Return: A pointer to dest.
 *
 * @dest: The destination string.
 * @src: The source string.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

