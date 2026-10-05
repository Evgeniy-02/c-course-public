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

int merge_sorted(const int first[], int first_count,
                 const int second[], int second_count,
                 int result[])
{
    int first_index = 0;
    int second_index = 0;
    int result_count = 0;

    while (first_index < first_count && second_index < second_count) {
        if (first[first_index] <= second[second_index]) {
            result[result_count] = first[first_index];
            first_index++;
        } else {
            result[result_count] = second[second_index];
            second_index++;
        }
        result_count++;
    }

    while (first_index < first_count) {
        result[result_count] = first[first_index];
        first_index++;
        result_count++;
    }

    while (second_index < second_count) {
        result[result_count] = second[second_index];
        second_index++;
        result_count++;
    }

    return result_count;
}

int main(void)
{
    int first[4] = {1, 3, 5, 7};
    int second[4] = {2, 4, 6, 8};
    int merged[8];

    printf("First: ");
    print_array(first, 4);
    printf("Second: ");
    print_array(second, 4);

    int merged_count = merge_sorted(first, 4, second, 4, merged);

    printf("Merged: ");
    print_array(merged, merged_count);
    return 0;
}
