#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0-9 followed by a new line
 */
void print_numbers(void)
{
    char c;

    for (c = '0'; c <= '9'; c++)
        putchar(c);
    putchar('\n');
}
