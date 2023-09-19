#include <stdio.h>
#include <stdbool.h>

int main (void) {
    printf("int : %i, char: %i, float: %i, bool: %i, pointer: %i \n", 
            sizeof(int), sizeof(char), sizeof(float), sizeof(bool), sizeof(void *));
}