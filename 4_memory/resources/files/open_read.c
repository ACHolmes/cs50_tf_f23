#include <stdio.h>

int main (void) {
    // Open the file, returning a pointer to the file
    FILE* file = fopen("hi.txt", "r");

    // Create buffer to store data we read from file
    char buffer[10] = {0};
    
    // Try to read 10 1 byte chunks
    int res = fread(buffer, 1, 10, file);

    // Print what we read, and how many we returned
    printf("Buffer: %s, Returned: %i\n", buffer, res);
}