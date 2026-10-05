#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    char answer = 'y';
    while (answer == 'y') {
        int secret = rand() % 100 + 1;
        int attempts = 0;
        int guess = 0;

        while (guess != secret) {
            printf("Enter a number from 1 to 100: ");
            scanf("%d", &guess);
            attempts++;

            if (guess > secret) {
                printf("Too big!\n");
            } else if (guess < secret) {
                printf("Too small!\n");
            } else {
                printf("You guessed it in %d attempts!\n", attempts);
            }
        }

        printf("Play again? (y/n): ");
        scanf(" %c", &answer);
    }

    return 0;
}
