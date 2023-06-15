#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int row_index, column_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (row_index = 0; row_index < height; row_index++)
	{
		mee[row_index] = malloc(sizeof(int) * width);

		if (mee[row_index] == NULL)
		{
			for (; row_index >= 0; row_index--)
				free(mee[row_index]);

			free(mee);
			return (NULL);
		}
	}

	for (row_index = 0; row_index < height; row_index++)
	{
		for (column_index = 0; column_index < width; column_index++)
			mee[row_index][column_index] = 0;
	}

	return (mee);
}

