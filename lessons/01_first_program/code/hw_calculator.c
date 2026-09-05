#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    // TODO: print a - b
    // TODO: print a * b
    return 0;
}
