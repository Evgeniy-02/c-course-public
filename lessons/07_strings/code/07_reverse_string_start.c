#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[32];

    printf("Word: ");
    scanf("%31s", word);

    int length = strlen(word);
    int left = 0;
    int right = length - 1;
    // TODO: while left < right: swap word[left] and word[right], move both indexes

    printf("Reversed: %s\n", word);
    return 0;
}
