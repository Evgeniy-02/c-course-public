#include <stdio.h>

int main(void)
{
    double cell_voltage = 4.2;
    double drop_per_second = 0.01;
    int second = 0;

    // TODO: while cell_voltage > 3.3: print second and voltage,
    //       warn at 3.5, then subtract drop_per_second and add 1 second
    printf("%3d s  %.2f V\n", second, cell_voltage);

    printf("LAND NOW\n");
    return 0;
}
