#include <stdio.h>

int clamp(int value, int low, int high)
{
    // TODO: return low if value < low, high if value > high, otherwise value
    return value;
}

int throttle_percent(int pulse_us)
{
    // TODO: 1000 us is 0 %, 2000 us is 100 %
    return 0;
}

int main(void)
{
    int pulse_us = 0;

    printf("Pulse (us): ");
    scanf("%d", &pulse_us);

    int pulse_used = clamp(pulse_us, 1000, 2000);
    printf("Pulse used: %d us\n", pulse_used);
    printf("Throttle: %d %%\n", throttle_percent(pulse_used));
    return 0;
}
