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

int main(void)
{
    int numbers[10] = {7, 522, 3, 4, 6, 80, 9, 10, 52, 67};
    int count = 10;

    printf("Original: ");
    print_array(numbers, count);

    for (int pass = 0; pass < count - 1; pass++) {
        for (int i = 0; i < count - 1 - pass; i++) {
            if (numbers[i] > numbers[i + 1]) {
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
            }
        }
        printf("Pass %d: ", pass + 1);
        print_array(numbers, count);
    }

    printf("Sorted: ");
    print_array(numbers, count);
    return 0;
}
