#include <stdio.h>

int factorial (int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main (void) {
    printf("5 factorial is: %i", factorial(5));
    factorial(5); // return 5 * factorial(4)         5 * 24 = 120
    factorial(4); // return 4 * factorial(3)         4 * 6 = 24
    factorial(3); // return 3 * factorial(2)         3 * 2 = 6
    factorial(2); // return 2 * factorial(1)         2 * 1 = 2
    factorial(1); // returns 1 :)  now let's build up ^
}