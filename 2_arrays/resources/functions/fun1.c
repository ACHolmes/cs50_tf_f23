#include <stdio.h>

// We can define functions above the main function.
int add_three(int x) {
    return x + 3;
}

int main (void) {
    int result = add_three(1);
    printf("Result: %i\n", result);
}