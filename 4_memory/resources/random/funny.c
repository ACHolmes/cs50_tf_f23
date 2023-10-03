#include <stdio.h>

int main (void) {
    int x = 1;
    int* y = &x;

    x = 2;
    *y = 2;
    printf("%i\n", x);
}