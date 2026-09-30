#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    // TODO: numbers below 2 are not prime
    // TODO: if some i from 2 with i * i <= n divides n, it is not prime
    return false;
}

int main(void)
{
    int number = 0;

    printf("Number: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("%d is prime\n", number);
    } else {
        printf("%d is not prime\n", number);
    }

    printf("Primes from 1 to 50:");
    // TODO: for i from 1 to 50, print i if is_prime(i)
    printf("\n");
    return 0;
}
