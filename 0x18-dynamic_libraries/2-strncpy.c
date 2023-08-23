#include "main.h"
/**
 * _strncpy - Copies a string, up to n characters from the second string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: The maximum number of characters to copy from the source string
 *
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

