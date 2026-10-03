#include <stdio.h>
#include <stdbool.h>

void print_binary(unsigned char value)
{
    for (int bit = 7; bit >= 0; bit--) {
        printf("%d", (value >> bit) & 1);
    }
}

unsigned char set_flag(unsigned char flags, int bit)
{
    // TODO: return flags with this bit set to 1 (use | and <<)
    return flags;
}

unsigned char clear_flag(unsigned char flags, int bit)
{
    return flags & ~(1 << bit);
}

bool has_flag(unsigned char flags, int bit)
{
    // TODO: return true if this bit is 1 (use >> and & 1)
    return false;
}

void print_state(const char event[], unsigned char flags)
{
    printf("%-12s -> ", event);
    print_binary(flags);
    printf("\n");
}

void print_yes_no(const char label[], bool value)
{
    if (value) {
        printf("%s: yes\n", label);
    } else {
        printf("%s: no\n", label);
    }
}

int main(void)
{
    int armed_bit = 0;
    int gps_fix_bit = 1;
    int failsafe_bit = 2;
    int low_battery_bit = 3;
    unsigned char flags = 0;

    print_state("start", flags);
    flags = set_flag(flags, armed_bit);
    print_state("arm", flags);
    flags = set_flag(flags, gps_fix_bit);
    print_state("gps fix", flags);
    flags = set_flag(flags, low_battery_bit);
    print_state("low battery", flags);

    print_yes_no("armed", has_flag(flags, armed_bit));
    print_yes_no("failsafe", has_flag(flags, failsafe_bit));
    print_yes_no("low battery", has_flag(flags, low_battery_bit));

    flags = clear_flag(flags, armed_bit);
    print_state("disarm", flags);
    print_yes_no("armed", has_flag(flags, armed_bit));
    return 0;
}
