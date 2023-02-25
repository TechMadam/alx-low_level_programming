#include <stdio.h>

/* Main - entry point */

/* Return : always return zero*/
int main(void)
{
        int n;
        int lastd;

        lastd = n % 10;
        if (lastd > 5)
        {
                printf("Last digit of %i is %i and is greater than 5\n", n, lastd);
        }
        else if (lastd == 0)
        {
                printf("Last digit of %i is %i and is 0\n", n, lastd);
        }
        else
        {
                printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastd);
        }
        return (0);
}
