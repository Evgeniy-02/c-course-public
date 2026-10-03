#include <stdio.h>

// TODO: write cell voltage and percent through the pointers
void battery_status(double pack_voltage, int cells, double *cell_voltage, int *percent)
{
}

int main(void)
{
    double pack_voltage = 0.0;
    int cells = 0;

    printf("Pack voltage (V): ");
    scanf("%lf", &pack_voltage);
    printf("Cells: ");
    scanf("%d", &cells);

    double cell_voltage = 0.0;
    int percent = 0;
    // TODO: call battery_status with &cell_voltage and &percent

    printf("Cell voltage: %.2f V\n", cell_voltage);
    printf("Charge: %d %%\n", percent);
    return 0;
}
