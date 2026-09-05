#include <stdio.h>

int main(void)
{
    int capacity_mah = 0;
    int current_a = 0;

    printf("Battery capacity (mAh): ");
    scanf("%d", &capacity_mah);

    printf("Motor current (A): ");
    scanf("%d", &current_a);

    int current_ma = current_a * 1000;
    int flight_minutes = capacity_mah * 60 / current_ma;

    printf("Flight time: %d minutes\n", flight_minutes);
    return 0;
}
