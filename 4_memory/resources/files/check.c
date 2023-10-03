#include <stdio.h>

int main (void) {
    // Open file in read mode again
    FILE* output = fopen("check", "r");

    // Check the file opened correctly
    if (output == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Close the file
    fclose(output);
}