#include <stdio.h>

int gcd(int a, int b)
{
    // TODO: while b != 0: remainder = a % b, a = b, b = remainder
    return a;
}

int lcm(int a, int b)
{
    // TODO: a / gcd(a, b) * b
    return 0;
}

int main(void)
{
    int first = 0;
    int second = 0;

    printf("First: ");
    scanf("%d", &first);
    printf("Second: ");
    scanf("%d", &second);

    printf("gcd(%d, %d) = %d\n", first, second, gcd(first, second));
    printf("lcm(%d, %d) = %d\n", first, second, lcm(first, second));
    return 0;
}
