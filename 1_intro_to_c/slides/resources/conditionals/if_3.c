#include <stdio.h>

void do_something(void) {
    printf("Did something\n");
}

int main (void) {
    int truthy_int = 1;
    truthy_int = 3 < 5;
    truthy_int = 100000;
    truthy_int = -1;

    int falsy_int = 0;

    char truthy_char = 'A';

    char falsy_char;

    if (falsy_char) {
        printf("Random char: %c\n", falsy_char);
        do_something();
    }
}