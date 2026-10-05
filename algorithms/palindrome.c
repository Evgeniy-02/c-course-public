#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n)
{
    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    return reversed == original;
}

int main(void)
{
    int number = 12321;
    if (is_palindrome(number)) {
        printf("%d is a palindrome\n", number);
    } else {
        printf("%d is not a palindrome\n", number);
    }

    printf("Palindromes from 10 to 200:");
    for (int i = 10; i <= 200; i++) {
        if (is_palindrome(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
