#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long long prev_num = 1, curr_num = 2, next_num;

printf("%llu, %llu", prev_num, curr_num);

for (i = 2; i < 50; i++)
{
next_num = prev_num + curr_num;
printf(", %llu", next_num);
prev_num = curr_num;
curr_num = next_num;
}

printf("\n");

return (0);
}
