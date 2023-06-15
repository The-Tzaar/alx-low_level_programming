#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int index, repeat = 0;

	if (str == NULL)
		return (NULL);
	index = 0;
	while (str[index] != '\0')
		index++;

	aaa = malloc(sizeof(char) * (index + 1));

	if (aaa == NULL)
		return (NULL);

	for (repeat = 0; str[repeat]; repeat++)
		aaa[repeat] = str[repeat];

	return (aaa);
}

