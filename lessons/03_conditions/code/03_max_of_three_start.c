#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    // TODO: if b is bigger than max, remember b
    // TODO: if c is bigger than max, remember c

    printf("Max: %d\n", max);
    return 0;
}
