#include <stdio.h>

int main (void) {
    int int_array[5] = {1};
    char char_array[5] = {'1'};
    printf("Int array size: %i, char array size: %i", sizeof(int) * 5, sizeof(char) * 5);
}

