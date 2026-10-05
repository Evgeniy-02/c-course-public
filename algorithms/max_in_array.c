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
    int numbers[12] = {-1950, -1980, -1900, -2000, -1930, -1999,
                       -1910, -1975, -1920, -1990, -1960, -1905};
    int count = 12;

    int max_value = numbers[0];
    for (int i = 1; i < count; i++) {
        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }
    }

    print_array(numbers, count);
    printf("Max element: %d\n", max_value);
    return 0;
}
