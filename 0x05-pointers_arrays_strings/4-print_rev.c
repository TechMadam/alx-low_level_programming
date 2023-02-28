#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
        int len = 0;

        /* Find the length of the string */
        while (s[len] != '\0')
                len++;

        /* Print the string in reverse order */
        for (int i = len - 1; i >= 0; i--)
                putchar(s[i]);

        /* Print a newline character */
        putchar('\n');
}
