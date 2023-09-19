#include <stdio.h>

#define MONTHS 12

int main (void) {
    float precip[MONTHS] = {
      3.92, 3.3, 3.85, 3.6, // JFMA
      3.24, 3.22, 3.06, 3.37, // MJJA
      3.47, 3.79, 3.98, 3.73  //SOND
    };
    for (int i = 0; i < MONTHS; i ++) {
        printf("Average Boston precipitation in month %i: %0.2f\n", i, precip[i]);
    }
}