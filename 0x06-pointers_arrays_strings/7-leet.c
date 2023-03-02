#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
    int i, j;
    char leet_map[] = "aAeEoOtTlL";
    char leet_repl[] = "4433007711";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == leet_map[j])
            {
                str[i] = leet_repl[j];
                break;
            }
        }
    }

    return str;
}
