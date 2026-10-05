#include <stdio.h>

int main(void)
{
    int video_size_mb = 900;
    int speed_kbit_per_s = 100;
    int bits_per_byte = 8;

    int wrong_seconds = video_size_mb / speed_kbit_per_s;
    printf("Wrong (int division): %d seconds\n", wrong_seconds);

    double speed_mb_per_s = (double) speed_kbit_per_s / bits_per_byte / 1000.0;
    double seconds = video_size_mb / speed_mb_per_s;
    double minutes = seconds / 60;
    double hours = minutes / 60;

    printf("Correct: %.1f seconds = %.1f minutes = %.1f hours\n",
           seconds, minutes, hours);
    return 0;
}
