#include <stdio.h>

int main (void) {
    // Open file in write mode
    FILE* output = fopen("output.txt", "w");

    // Create a buffer, first 5 chars spell "quack"
    char buffer[10] = {'q', 'u', 'a', 'c', 'k'};

    // Write the buffer to the file
    fwrite(buffer, sizeof(char), 10, output);
}