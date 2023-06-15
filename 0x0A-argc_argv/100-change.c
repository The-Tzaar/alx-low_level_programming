#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int change_amount, loop_counter, coins_needed;
	int coin_values[];

	coin_values = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change_amount = atoi(argv[1]);

	coins_needed = 0;

	if (change_amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (loop_counter = 0; loop_counter < 5 && change_amount >= 0; loop_counter++)
	{
		while (change_amount >= coin_values[loop_counter])
		{
			coins_needed++;
			change_amount -= coin_values[loop_counter];
		}
	}

	printf("%d\n", coins_needed);
	return (0);
}

