#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints an error message to the standard error
 * Return: Always 1
 */
int main(void)
{
	char *error_message = "and that piece of art is useful\"
		-Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, error_message, 59);
	return (1);

}


