#include <stdio.h>

// TODO: this version does not work, it swaps copies;
//       change parameters to int *a, int *b and use *a, *b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int first = 0;
    int second = 0;

    printf("First: ");
    scanf("%d", &first);
    printf("Second: ");
    scanf("%d", &second);

    printf("Before: first = %d, second = %d\n", first, second);
    // TODO: pass addresses: swap(&first, &second)
    swap(first, second);
    printf("After:  first = %d, second = %d\n", first, second);
    return 0;
}
