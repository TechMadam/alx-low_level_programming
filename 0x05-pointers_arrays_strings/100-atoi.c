#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int sign = 1, num = 0;
    char *p = s;

    while (*p == ' ' || *p == '\t' || *p == '\n')
        p++;

    if (*p == '-')
        sign = -1, p++;
    else if (*p == '+')
        p++;

    while (*p >= '0' && *p <= '9')
    {
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*p - '0') > INT_MAX % 10))
            return sign == 1 ? INT_MAX : INT_MIN;
        num = num * 10 + (*p - '0');
        p++;
    }

    return sign * num;
}
