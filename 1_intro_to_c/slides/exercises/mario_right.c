#include <cs50.h>
#include <stdio.h>

int main (void) {
    int height;
    do {
        height = get_int("Enter height: ");
    } while (height <= 0);
    // Let's create rows 1-height
    for (int row = 1; row < height + 1; row++) {
        // At row 1, we want 1 hash. Then 2 at the next row, and so on
        for (int hashes = 1; hashes < row + 1; hashes++) {
            printf("#");
        }
        printf("\n");
    }
}

