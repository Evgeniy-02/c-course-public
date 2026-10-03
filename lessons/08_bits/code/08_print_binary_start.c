#include <stdio.h>

int main(void)
{
    int number = 0;

    printf("Number (0-255): ");
    scanf("%d", &number);

    unsigned char value = number;

    printf("%d = ", value);
    // TODO: for bit from 7 down to 0 print (value >> bit) & 1
    printf(" = 0x%02X", value);
    // TODO: print ", even" if value & 1 is 0, otherwise ", odd"
    printf("\n");
    return 0;
}
