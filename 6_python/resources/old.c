#include <stdio.h>
#include <stdbool.h>

int main (void) {
    int x = 1;
    int y = 2;
    if (x == 2 || y != 5) {
        if (true && false) {
            printf("never prints\n");
        }
        printf("maybe prints?\n");

        float not_one = (float) 3 / 2; 
        int one = 3 / 2;
        printf("%f, %i", not_one, one);
    }
}