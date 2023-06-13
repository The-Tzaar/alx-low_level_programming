#ifndef MAIN_H
#define MAIN_H

/* This header file defines a number of C functions. */

int _putchar(char c);
/* This function prints a character to the standard output stream. */

int _islower(int c);
/* This function checks if a character is a lowercase letter. */

int _isalpha(int c);
/* This function checks if a character is an alphabetic character. */

int _abs(int n);
/* This function calculates the absolute value of an integer. */

int _isupper(int c);
/* This function checks if a character is an uppercase letter. */

int _isdigit(int c);
/* This function checks if a character is a digit. */

int _strlen(char *s);
/* This function calculates the length of a string. */

void _puts(char *s);
/* This function prints a string to the standard output stream. */

char *_strcpy(char *dest, char *src);
/* This function copies a string from one location to another. */

int _atoi(char *s);
/* This function converts a string to an integer. */

char *_strcat(char *dest, char *src);
/* This function concatenates two strings. */

char *_strncat(char *dest, char *src, int n);
/* This function concatenates a portion of a string to another string. */

char *_strncpy(char *dest, char *src, int n);
/* This function copies a portion of a string to another string. */

int _strcmp(char *s1, char *s2);
/* This function compares two strings. */

char *_memset(char *s, char b, unsigned int n);
/* This function fills a block of memory with a specific value. */

char *_memcpy(char *dest, char *src, unsigned int n);
/* This function copies a block of memory from one location to another. */

char *_strchr(char *s, char c);
/* This function finds the first occurrence of a character in a string. */

unsigned int _strspn(char *s, char *accept);
/* This function counts the number of characters in a string that are also present in a specified string. */

char *_strpbrk(char *s, char *accept);
/* This function finds the first occurrence of any character from a specified string in another string. */

char *_strstr(char *haystack, char *needle);
/* This function finds the first occurrence of a string in another string. */

#endif

