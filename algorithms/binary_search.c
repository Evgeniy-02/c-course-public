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

int binary_search(const int values[], int count, int target)
{
    int left = 0;
    int right = count - 1;
    while (left <= right) {
        int middle = (left + right) / 2;
        if (values[middle] == target) {
            return middle;
        }
        if (values[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

void search_and_report(const int values[], int count, int target)
{
    int index = binary_search(values, count, target);
    if (index >= 0) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found\n", target);
    }
}

int main(void)
{
    int numbers[8] = {1, 3, 5, 7, 9, 11, 13, 15};
    int count = 8;

    printf("Array: ");
    print_array(numbers, count);

    search_and_report(numbers, count, 9);
    search_and_report(numbers, count, 4);
    return 0;
}
