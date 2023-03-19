#include <stdlib.h>
/**
 * main - Entry point
 *
 * Prints all possible combinations of single-digit numbers,
 *              separated by a comma and a space, in ascending order.
 *              Uses putchar function.
 *
 * Return: Always EXIT_SUCCESS (0)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i != 10)
		{
			putchar(',');

			putchar(' ');
		}
		i++
	}

	putchar('\n');

	return (EXIT_SUCCESS);
}

