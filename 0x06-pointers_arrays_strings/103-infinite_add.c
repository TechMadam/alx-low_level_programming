#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers
 *
 * @n1: The first number to add
 * @n2: The second number to add
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result, or 0 if the result can't be stored
 * in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int len1 = strlen(n1);
        int len2 = strlen(n2);
        int len_r = 0;
        int carry = 0;
        int i, j;

        if (len1 + 1 > size_r || len2 + 1 > size_r)
                return (0);

        for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
        {
                int digit1 = i >= 0 ? n1[i] - '0' : 0;
                int digit2 = j >= 0 ? n2[j] - '0' : 0;
                int sum = digit1 + digit2 + carry;

                if (len_r + 1 > size_r)
                        return (0);

                r[len_r++] = sum % 10 + '0';
                carry = sum / 10;
        }

        if (carry && len_r + 1 <= size_r)
                r[len_r++] = carry + '0';

        if (len_r + 1 > size_r)
                return (0);

        r[len_r] = '\0';
        for (i = 0, j = len_r - 1; i < j; i++, j--)
        {
                char tmp = r[i];
                r[i] = r[j];
                r[j] = tmp;
        }

        return (r);
}
