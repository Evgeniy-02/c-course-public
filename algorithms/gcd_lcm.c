#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main(void)
{
    printf("gcd(48, 18) = %d\n", gcd(48, 18));
    printf("gcd(24, 36) = %d\n", gcd(24, 36));
    printf("gcd(17, 23) = %d\n", gcd(17, 23));
    printf("lcm(12, 18) = %d\n", lcm(12, 18));
    return 0;
}
