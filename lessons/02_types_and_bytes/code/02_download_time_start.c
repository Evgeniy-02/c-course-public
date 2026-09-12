#include <stdio.h>

int main(void)
{
    int speed_kbit_per_s = 100;
    int video_size_mb = 900;
    int bits_per_byte = 8;

    int seconds = video_size_mb / speed_kbit_per_s;

    printf("Download time: %d seconds\n", seconds);
    return 0;
}
