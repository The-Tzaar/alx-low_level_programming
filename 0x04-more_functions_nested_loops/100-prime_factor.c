#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long i, max;

	/* divide by 2 until no longer divisible */
	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	/* check odd numbers up to sqrt(n) */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}
	/* if n is still greater than 2, it is prime */
	if (n > 2)
		max = n;

	return (max);
}

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;

	long result = largest_prime_factor(n);

	printf("%ld\n", result);

	return (0);
}
