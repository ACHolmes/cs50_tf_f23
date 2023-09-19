#include <stdio.h>

// Or more commonly, prototype functions at the top.
int times_two(int x);

int main (void) {
    int result = times_two(1);
    printf("Result: %i\n", result);
}

// And then actually define the function behavior
// beneath the main function definition.
int times_two(int x) {
    return x * 2;
}