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

void reverse_array(int values[], int count)
{
    int left = 0;
    int right = count - 1;
    while (left < right) {
        int temp = values[left];
        values[left] = values[right];
        values[right] = temp;
        left++;
        right--;
    }
}

int main(void)
{
    int numbers[6] = {1, 2, 3, 4, 5, 6};
    int count = 6;

    printf("Original: ");
    print_array(numbers, count);

    reverse_array(numbers, count);

    printf("Reversed: ");
    print_array(numbers, count);
    return 0;
}
