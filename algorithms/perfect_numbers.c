#include <stdio.h>
#include <stdbool.h>

bool is_perfect(int n)
{
    if (n <= 1) {
        return false;
    }
    int sum_of_divisors = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum_of_divisors = sum_of_divisors + i;
        }
    }
    return sum_of_divisors == n;
}

int main(void)
{
    int limit = 10000;
    printf("Perfect numbers up to %d:\n", limit);
    for (int i = 1; i <= limit; i++) {
        if (is_perfect(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
