#include <stdio.h>

long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int main(void)
{
    printf("10! = %lld\n", factorial(10));
    printf("20! = %lld\n", factorial(20));
    return 0;
}
