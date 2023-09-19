#include <stdio.h>
#include <cs50.h>

#define NUM_COINS 8

int main (void) {
    int denominations[NUM_COINS] = {200, 100, 50, 20, 10, 5, 2, 1};

    int change = get_int("Change owed: ");
    int coins = 0;

    for (int i = 0; i < NUM_COINS; i++) {
        coins += change / denominations[i];
        change %= denominations[i];
    }
    printf("%i\n", coins);

}