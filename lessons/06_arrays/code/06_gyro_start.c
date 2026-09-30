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

double average(const int values[], int count)
{
    // TODO: sum all values, divide by count as double
    return 0.0;
}

int min_of(const int values[], int count)
{
    // TODO: start with values[0], replace it by every smaller value
    return 0;
}

int max_of(const int values[], int count)
{
    // TODO: start with values[0], replace it by every bigger value
    return 0;
}

int main(void)
{
    int gyro_rate[8] = {12, 15, 11, 40, 13, 14, 10, 12};
    int count = 8;

    printf("Gyro: ");
    print_array(gyro_rate, count);
    printf("Average: %.2f\n", average(gyro_rate, count));
    printf("Min: %d\n", min_of(gyro_rate, count));
    printf("Max: %d\n", max_of(gyro_rate, count));
    return 0;
}
