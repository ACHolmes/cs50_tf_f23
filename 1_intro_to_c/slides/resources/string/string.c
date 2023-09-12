#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main (void) {
    string example = "Hello world!";
    printf("Some character from string: %c\n", example[2]);
    printf("Length of string: %li\n", strlen(example));
}