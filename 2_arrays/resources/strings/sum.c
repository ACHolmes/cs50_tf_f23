#include <stdio.h>
#include <string.h>

int main (void) {
    char* name = "Andrew";
    int total = 0;
    for (int i = 0; i < strlen(name); i++){
        // We can do arithmetic directly with chars
        total += name[i];
    }
    printf("Total ASCII value of my name: %i\n", total);

    // We can print chars as numbers
    printf("A char: %i\n", 'c');

    // And numbers between 0-127 as chars
    printf("A number: %c\n", 122);
}