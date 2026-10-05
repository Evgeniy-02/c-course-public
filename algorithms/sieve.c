#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int limit = 100;
    bool is_prime[101];

    for (int i = 0; i <= limit; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int multiple = i * i; multiple <= limit; multiple = multiple + i) {
                is_prime[multiple] = false;
            }
        }
    }

    printf("Primes up to %d:", limit);
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
