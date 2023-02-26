#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: Prints "_putchar" followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		char c = ch[i];

		_putchar(c);

		if (i == 7)
		{
			_putchar('\n');
		}
	}
	return (0);
}
