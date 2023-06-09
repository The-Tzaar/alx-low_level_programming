#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string to stdout
 * @str: pointer to a string
 *
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	write(STDOUT_FILENO, str, len);
	write(STDOUT_FILENO, "\n", 1);
}
