#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double pack_voltage = 0.0;
    int cells = 0;
    int satellites = 0;
    char arm_switch = 'n';

    printf("Pack voltage (V): ");
    scanf("%lf", &pack_voltage);
    printf("Cells: ");
    scanf("%d", &cells);
    printf("GPS satellites: ");
    scanf("%d", &satellites);
    printf("Arm switch on? (y/n): ");
    scanf(" %c", &arm_switch);

    if (cells <= 0) {
        printf("NO GO: cells must be 1 or more\n");
        return 0;
    }

    double cell_voltage = pack_voltage / cells;
    printf("Cell voltage: %.2f V\n", cell_voltage);

    bool battery_ok = cell_voltage >= 3.5;
    // TODO: gps_ok when satellites >= 6
    bool gps_ok = false;
    // TODO: armed when arm_switch == 'y'
    bool armed = false;

    // TODO: print "GO" when all three are ok, otherwise "NO GO" with the reason
    if (battery_ok) {
        printf("GO\n");
    } else {
        printf("NO GO: battery low\n");
    }
    return 0;
}
