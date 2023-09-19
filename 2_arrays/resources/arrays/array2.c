#include <stdio.h>

int main (void) {
    int array[5];
    printf("This array is: %i, %i\n", &array, array);
    printf("At that location is: %i, %i\n", *(array), *(&array));
    array[0] = 2;
    printf("At that location is: %i, %i\n", *(array), *(&array));
}