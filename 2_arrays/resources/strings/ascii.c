#include <stdio.h>
#include <inttypes.h>

int main (void) {
    char word[5] = {'w', 'o', 'r', 'd', '\0'};
    uint8_t fake_word[5] = {119, 111, 114, 100, 0};
    printf("A real word: %s\n", word);
    printf("Err a fake word? %s\n", fake_word);
}