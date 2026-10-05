#include <stdio.h>

void print_cell(int row, int col)
{
    int product = row * col;
    if (product < 10) {
        printf(" ");
    }
    printf("%d ", product);
}

int main(void)
{
    for (int row = 1; row <= 10; row++) {
        for (int col = 1; col <= 10; col++) {
            print_cell(row, col);
        }
        printf("\n");
    }
    return 0;
}
