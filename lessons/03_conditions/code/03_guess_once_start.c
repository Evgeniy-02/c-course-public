#include <stdio.h>

int main(void)
{
    int secret = 42;
    int guess = 0;

    printf("Guess a number from 1 to 100: ");
    scanf("%d", &guess);

    // TODO: "Too big!" if guess > secret
    // TODO: "Too small!" if guess < secret
    // TODO: "You got it!" otherwise
    printf("You entered %d\n", guess);
    return 0;
}
