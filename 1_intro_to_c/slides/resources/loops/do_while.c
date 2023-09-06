#include <stdio.h>
#include <cs50.h>

int main (void) {
    int x;
    do {
        x = get_int("Give me x: ");
        printf("\n");
    } while (!x);
}