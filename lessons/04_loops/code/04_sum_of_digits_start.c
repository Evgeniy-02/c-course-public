#include <stdio.h>

int main(void)
{
    int number = 0;

    printf("Number: ");
    scanf("%d", &number);

    int sum = 0;
    int rest = number;
    // TODO: while rest > 0: add last digit (rest % 10) to sum, drop it (rest / 10)

    printf("Sum of digits of %d = %d\n", number, sum);
    return 0;
}
