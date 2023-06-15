#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int index, is_negative, number, len, digit_found, digit;

	index = 0;
	is_negative = 0;
	number = 0;
	len = 0;
	digit_found = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (index < len && digit_found == 0)
	{
		if (s[index] == '-')
			++is_negative;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0';
			if (is_negative % 2)
				digit = -digit;
			number = number * 10 + digit;
			digit_found = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			digit_found = 0;
		}
		index++;
	}

	if (digit_found == 0)
		return (0);

	return (number);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

