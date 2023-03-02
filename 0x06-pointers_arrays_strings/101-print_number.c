#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: integer to print
 */
void print_number(int n)
{
    int digit, sign, div, count = 1;

    sign = n < 0 ? -1 : 1;
    div = sign * n;

    /* Count number of digits in the integer */
    while (div / 10 != 0)
    {
        count++;
        div /= 10;
    }

    /* Print sign for negative integers */
    if (sign == -1)
        _putchar('-');

    /* Print digits in reverse order */
    while (count > 0)
    {
        div = sign * n;
        digit = div;

        /* Get the digit at the current place */
        for (int i = 1; i < count; i++)
            digit /= 10;

        digit %= 10;

        _putchar('0' + digit);
        count--;
    }
}
