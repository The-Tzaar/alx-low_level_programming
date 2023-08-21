#include "main.h"
/**
 * Prints a string, followed by a new line, to stdout.
 *
 * @param str The string to print.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

