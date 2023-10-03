#include <stdio.h>

int main (void) {
    int x = 2;
    int* addr = &x;
    printf("%i", *addr);
}