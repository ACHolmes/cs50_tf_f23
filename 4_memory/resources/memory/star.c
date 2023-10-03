#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int* store = malloc(sizeof(int) * 2);
    
    // Two ways of setting the first element!
    *store = 2;
    store[0] = 1;

    // And the second element
    store[1] = 10;
    *(store + 1) = 20;
    
    printf("Store[0]: %i, store[1]: %i\n", store[0], store[1]);
    free(store);
}