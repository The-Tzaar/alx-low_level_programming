#include "main.h"
/**
 * _strncat - Concatenates two strings, up to n bytes from the second string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: The maximum number of bytes to copy from the source string
 *
 * Return: A pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

