#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    int i = 3;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i = i + 2;
    }
    return true;
}

int main(void)
{
    int number = 17;
    if (is_prime(number)) {
        printf("%d is prime\n", number);
    } else {
        printf("%d is not prime\n", number);
    }

    printf("Primes from 1 to 50:");
    for (int i = 1; i <= 50; i++) {
        if (is_prime(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
