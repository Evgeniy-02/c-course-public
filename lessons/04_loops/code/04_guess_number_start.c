#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    printf("I picked a number from 1 to 100.\n");

    // TODO: repeat until guess == secret, count attempts
    printf("Your guess: ");
    scanf("%d", &guess);
    attempts++;

    if (guess > secret) {
        printf("Too big!\n");
    } else if (guess < secret) {
        printf("Too small!\n");
    } else {
        printf("You got it in %d attempts!\n", attempts);
    }
    return 0;
}
