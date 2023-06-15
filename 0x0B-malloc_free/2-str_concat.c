#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int index, char_index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	index = char_index = 0;
	while (s1[index] != '\0')
		index++;
	while (s2[char_index] != '\0')
		char_index++;
	conct = malloc(sizeof(char) * (index + char_index + 1));

	if (conct == NULL)
		return (NULL);
	index = char_index = 0;
	while (s1[index] != '\0')
	{
		conct[index] = s1[index];
		index++;
	}

	while (s2[char_index] != '\0')
	{
		conct[index] = s2[char_index];
		index++, char_index++;
	}
	conct[index] = '\0';
	return (conct);
}

