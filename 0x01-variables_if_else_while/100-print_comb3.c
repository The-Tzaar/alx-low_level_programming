#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits,
 * separated by a comma and a space, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 < 9; num1++)
    {
        for (num2 = num1 + 1; num2 <= 9; num2++)
        {
            putchar(num1 + '0');
            putchar(num2 + '0');

            if (num1 != 8 || num2 != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');
    return (0);
}

