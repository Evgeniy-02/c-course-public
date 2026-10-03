#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    char command[32];
    bool armed = false;
    double pack_voltage = 15.8;

    while (1) {
        printf("Command: ");
        scanf("%31s", command);

        if (strcmp(command, "quit") == 0) {
            printf("Bye\n");
            break;
        }
        // TODO: arm -> armed = true, print Armed
        // TODO: disarm -> armed = false, print Disarmed
        // TODO: status -> print armed/disarmed and pack_voltage
        printf("Unknown command: %s\n", command);
    }
    return 0;
}
