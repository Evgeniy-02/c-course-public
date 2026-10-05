#include <stdio.h>

void print_array(const int values[], int count)
{
    for (int i = 0; i < count; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", values[i]);
    }
    printf("\n");
}

void shift_left(int values[], int count, int shift)
{
    shift = shift % count;
    for (int step = 0; step < shift; step++) {
        int first = values[0];
        for (int i = 0; i < count - 1; i++) {
            values[i] = values[i + 1];
        }
        values[count - 1] = first;
    }
}

int main(void)
{
    int numbers[5] = {1, 2, 3, 4, 5};
    int count = 5;
    int shift = 2;

    printf("Original: ");
    print_array(numbers, count);

    shift_left(numbers, count, shift);

    printf("After shift left by %d: ", shift);
    print_array(numbers, count);
    return 0;
}
