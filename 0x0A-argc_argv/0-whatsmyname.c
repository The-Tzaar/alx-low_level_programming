#include <stdio.h>
#include "main.h"

/**
 * This function prints the name of the program.
 *
 * @param argc The number of arguments passed to the program.
 * @param argv An array of pointers to strings that
 * stores the arguments passed to the program.
 *
 * @return Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	// Print the name of the program.
	printf("%s\n", argv[0]);

	// Return 0 to indicate that the program terminated successfully.
	return 0;
}

