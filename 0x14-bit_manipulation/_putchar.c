#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 *
 * @c: the character to print
 *
 * Return: On success, returns the number of bytes written (always 1).
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

