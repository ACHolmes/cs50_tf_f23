#include <stdio.h>
#include <string.h>

void f (void) {
    char array[10] = {'a', 'b', 'c', 'd', 'e', 
                      'f', 'g', 'h', 'i', 'j'};
    return;
}

int main (void) {
    f();
    char array[5] = {'z', 'y', 'x', 'w', 'v'};
    printf("%lu", strlen(array));
}
