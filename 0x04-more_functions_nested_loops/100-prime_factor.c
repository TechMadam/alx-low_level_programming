#include <stdio.h>
#include <math.h>
int main()
{
    long long number = 612852475143;
    long long i, max_factor;

    // divide out all factors of 2
    while (number % 2 == 0) {
        number /= 2;
        max_factor = 2;
    }

    // divide out all odd factors
    for (i = 3; i * i <= number; i += 2) {
        while (number % i == 0) {
            number /= i;
            max_factor = i;
        }
    }

    // if the remaining number is itself a prime number
    if (number > 2) {
        max_factor = number;
    }

    printf("%lld\n", max_factor);

    return 0;
}
