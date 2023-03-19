#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point, generates a random number and prints the last digit
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed for rand() based on current time */
	n = rand();
	printf("Last digit of %d is ", n);

	if (n < 0)
	n = -n; /* Make sure n is positive */
	n %= 10; /* Get the last digit of n */

	if (n > 5)
		printf("%d and is greater than 5\n", n);
	else if (n == 0)
		printf("%d and is 0\n", n);
	else
		printf("%d and is less than 6 and not 0\n", n);

	return (0);
}

