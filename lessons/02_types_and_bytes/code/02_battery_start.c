#include <stdio.h>

int main(void)
{
    double pack_voltage = 0.0;
    int cells = 0;

    printf("Pack voltage (V): ");
    scanf("%lf", &pack_voltage);
    printf("Cells: ");
    scanf("%d", &cells);

    // TODO: cell_voltage = pack_voltage / cells
    double cell_voltage = 0.0;

    // TODO: percent = (cell_voltage - 3.3) / (4.2 - 3.3) * 100
    double percent = 0.0;

    printf("Cell voltage: %.2f V\n", cell_voltage);
    printf("Charge: %.0f %%\n", percent);
    return 0;
}
