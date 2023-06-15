#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int index, array_size;

	if (min > max)
		return (NULL);

	array_size = max - min + 1;

	ptr = malloc(sizeof(int) * array_size);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; min <= max; index++)
		ptr[index] = min++;

	return (ptr);
}

