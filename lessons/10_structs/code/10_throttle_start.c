#include <stdio.h>
#include <stdbool.h>

typedef struct {
    double voltage;
    int cells;
    bool armed;
    int throttle_percent;
} DroneState;

void print_state(DroneState state)
{
    double cell_voltage = state.voltage / state.cells;
    printf("%.1f V %dS (%.2f V per cell), ", state.voltage, state.cells, cell_voltage);
    if (state.armed) {
        printf("ARMED, ");
    } else {
        printf("DISARMED, ");
    }
    printf("throttle %d %%\n", state.throttle_percent);
}

// TODO: refuse if not armed; clamp percent to 0..100; write state->throttle_percent
void set_throttle(DroneState *state, int percent)
{
}

int main(void)
{
    DroneState drone = { 16.4, 4, true, 0 };
    int percent = 0;

    printf("Throttle (0-100): ");
    scanf("%d", &percent);

    set_throttle(&drone, percent);
    print_state(drone);
    return 0;
}
