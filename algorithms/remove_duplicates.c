#include <stdio.h>
#include <stdbool.h>

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

bool contains(const int values[], int count, int target)
{
    for (int i = 0; i < count; i++) {
        if (values[i] == target) {
            return true;
        }
    }
    return false;
}

int remove_duplicates(const int values[], int count, int result[])
{
    int result_count = 0;
    for (int i = 0; i < count; i++) {
        if (!contains(result, result_count, values[i])) {
            result[result_count] = values[i];
            result_count++;
        }
    }
    return result_count;
}

int main(void)
{
    int numbers[9] = {1, 3, 2, 3, 4, 1, 5, 2, 6};
    int count = 9;
    int unique[9];

    printf("Original: ");
    print_array(numbers, count);

    int unique_count = remove_duplicates(numbers, count, unique);

    printf("Without duplicates: ");
    print_array(unique, unique_count);
    return 0;
}
