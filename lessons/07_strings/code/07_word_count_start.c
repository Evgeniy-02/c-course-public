#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[] = "arm the drone and check the battery";
    int length = strlen(text);

    int space_count = 0;
    int vowel_count = 0;
    for (int i = 0; i < length; i++) {
        // TODO: count spaces; count vowels a, e, i, o, u
    }

    int word_count = space_count + 1;
    printf("Text: %s\n", text);
    printf("Length: %d\n", length);
    printf("Spaces: %d\n", space_count);
    printf("Words: %d\n", word_count);
    printf("Vowels: %d\n", vowel_count);
    return 0;
}
