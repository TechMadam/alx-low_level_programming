#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int sum = 0;
int fib1 = 1, fib2 = 2, next;

while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
{
sum += fib2; 
}

next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
}

printf("%d\n", sum);

return (0);
}
