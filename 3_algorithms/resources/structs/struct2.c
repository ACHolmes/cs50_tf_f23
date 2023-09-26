#include <stdio.h>
typedef struct pokemon {
    char* name;
    int hp;
    int attack;
    int defense;
    char* evolves_to;
} pokemon;

int main (void){
    pokemon charizard = {
        .name = "Charizard",
        .hp = 100,
        .attack = 150,
        .defense = 90,
        .evolves_to = "N/A"
    };
    printf("Charizard's attack: %i\n", charizard.attack);
    charizard.attack = 200;
    printf("Charizard now has attack: %i\n", charizard.attack);
}