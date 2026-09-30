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

void bubble_sort(int values[], int count)
{
    for (int pass = 0; pass < count - 1; pass++) {
        // TODO: for i from 0 to count - 1 - pass: swap neighbours if values[i] > values[i + 1]
        printf("Pass %d: ", pass + 1);
        print_array(values, count);
    }
}

int main(void)
{
    int numbers[6] = {9, 5, 7, 1, 8, 2};
    int count = 6;

    printf("Original: ");
    print_array(numbers, count);

    bubble_sort(numbers, count);

    printf("Sorted: ");
    print_array(numbers, count);
    return 0;
}
