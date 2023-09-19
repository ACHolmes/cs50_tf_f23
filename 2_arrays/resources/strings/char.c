#include <stdio.h>

int main (void) {
    char *example = "hello!";
    printf("The value at the location example points to: %i\n", *example);
    printf("The value of example[0]: %i\n", example[0]);
}