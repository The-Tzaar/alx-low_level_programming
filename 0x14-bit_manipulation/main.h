#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* function that converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* function that prints the binary representation of a number */
void print_binary(unsigned long int n);

/* function that returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* function that sets the value of a bit at a given index to 1 */
int set_bit(unsigned long int *n, unsigned int index);

/* function that sets the value of a bit at a given index to 0 */
int clear_bit(unsigned long int *n, unsigned int index);

/* function that returns the number of bits you would need to flip to
   convert integer n to integer m */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* function that checks the endianness of the machine */
int get_endianness(void);

#endif /* MAIN_H */

