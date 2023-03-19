#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers separated
 *        by ", " and in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j < 9 ? 44 : 10);
			putchar(j < 9 ? 32 : 0);
		}
	}
	return (0);
}

