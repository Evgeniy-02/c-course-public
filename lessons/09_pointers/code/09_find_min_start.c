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

// TODO: find the minimum and its index, write them through the pointers
void find_min(const int values[], int count, int *min_value, int *min_index)
{
}

int main(void)
{
    int numbers[6] = {45, 23, 89, 12, 67, 34};
    int count = 6;
    int min_value = 0;
    int min_index = 0;

    printf("Array: ");
    print_array(numbers, count);

    // TODO: call find_min with &min_value and &min_index

    printf("Min value: %d\n", min_value);
    printf("Min index: %d\n", min_index);
    return 0;
}
