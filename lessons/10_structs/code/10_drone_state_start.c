#include <stdio.h>
#include <stdbool.h>

typedef struct {
    double voltage;
    int cells;
    bool armed;
    int throttle_percent;
} DroneState;

// TODO: print voltage, cells, cell voltage, ARMED/DISARMED and throttle
void print_state(DroneState state)
{
    printf("state\n");
}

// TODO: arm only if voltage per cell >= 3.5, otherwise print the reason
void arm(DroneState *state)
{
}

int main(void)
{
    DroneState drone = { 0.0, 0, false, 0 };

    printf("Pack voltage (V): ");
    scanf("%lf", &drone.voltage);
    printf("Cells: ");
    scanf("%d", &drone.cells);

    print_state(drone);
    // TODO: call arm with &drone
    print_state(drone);
    return 0;
}
