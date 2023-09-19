#include <stdio.h>

int main (void) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j ++) {
            goto printStuff;
        }
    }
    printStuff: printf("Hi!\n");
}