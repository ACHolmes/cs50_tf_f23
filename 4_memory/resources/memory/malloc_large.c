#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char* storage = malloc(1000000000000);
    printf("Address: %lu\n", storage);

    if (storage) {
        free(storage);
    }
}