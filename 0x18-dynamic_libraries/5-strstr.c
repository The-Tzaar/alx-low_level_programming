#include "main.h"
/**
 * _strstr - Locates the first occurrence of the
 * substring needle in the string haystack.
 * @haystack: The string to search.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of the substring needle
 * in the string haystack, or NULL if no such occurrence is found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

