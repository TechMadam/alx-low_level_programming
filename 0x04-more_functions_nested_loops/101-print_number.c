#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer using only _putchar
 * @n: integer to be printed
 */
void print_number(int n)
{
    int div;

    if (n == 0)
    {
        putchar('0');
        return;
    }
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    for (div = 1; div <= n; div *= 10)
    {
        ;
    }
    div /= 10;
    while (div != 0)
    {
        putchar((n / div) % 10 + '0');
        div /= 10;
    }
}
