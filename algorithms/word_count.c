#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[] = "The quick brown fox jumps over the lazy dog";
    int length = strlen(text);

    int space_count = 0;
    for (int i = 0; i < length; i++) {
        if (text[i] == ' ') {
            space_count++;
        }
    }

    int word_count = space_count + 1;
    printf("Text: %s\n", text);
    printf("Words: %d\n", word_count);
    return 0;
}
