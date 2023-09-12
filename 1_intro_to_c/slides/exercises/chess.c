# include <stdio.h>

int main (void) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%i", (i + j) % 2);
        }
        printf("\n");
    }
}