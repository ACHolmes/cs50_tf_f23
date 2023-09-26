#include <stdio.h>
typedef struct pokemon {
    char* name;         // Pointers have 8 bytes
    int hp;             // int 4 bytes
    int attack;         // int 4 bytes
    int defense;        // int 4 bytes
    // INVISIBLE 4 bytes of padding. to do with ALIGNMENT rules
    char* evolves_to;   // Another 8 byte pointer
} pokemon;              // 32 bytes now!

int main (void){
    printf("Pokemon struct size: %i\n", sizeof(pokemon));
}