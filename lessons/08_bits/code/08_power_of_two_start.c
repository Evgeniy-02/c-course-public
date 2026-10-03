#include <stdio.h>

int main(void)
{
    int exponent = 9;

    int result_by_loop = 1;
    for (int i = 0; i < exponent; i++) {
        result_by_loop = result_by_loop * 2;
    }
    int result_by_shift = 1 << exponent;

    printf("2^9 by loop = %d\n", result_by_loop);
    printf("2^9 by shift = %d\n", result_by_shift);

    // TODO: for exponent from 0 to 10 print "2^e = 1 << e = value"
    return 0;
}
