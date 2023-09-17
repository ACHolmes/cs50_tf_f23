#include <stdio.h>

// We can define functions above the main function.
int add_three(int x) {
    return x + 3;
}

// Or more commonly, prototype functions at the top.
int times_two(int x);

int main (void) {
    int result = times_two(add_three(1));
    printf("Result: %i\n", result);
}

// And then actually define the function behavior beneath the main function definition.
int times_two(int x) {
    return x * 2;
}