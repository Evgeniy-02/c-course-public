#include <stdio.h>

int main(void)
{
    int capacity_mah = 0;
    int current_a = 0;

    printf("Battery capacity (mAh): ");
    // TODO: read capacity_mah with scanf

    printf("Motor current (A): ");
    // TODO: read current_a with scanf

    // TODO: flight_minutes = capacity_mah * 60 / (current_a * 1000)
    int flight_minutes = 0;

    printf("Flight time: %d minutes\n", flight_minutes);
    return 0;
}
