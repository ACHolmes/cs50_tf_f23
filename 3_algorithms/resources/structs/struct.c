typedef struct pokemon {
    char* name;
    int hp;
    int attack;
    int defense;
    char* evolves_to;
} pokemon;

int main (void){
    pokemon pikachu = {
        "Pikachu",
        70,
        60,
        30,
        "Raichu"
    };

    pokemon raichu;
    raichu.name = "Raichu";
    raichu.hp = 90;
    raichu.attack = 90;
    raichu.defense = 50;
    raichu.evolves_to = "N/A";

    pokemon charizard = {
        .name = "Charizard",
        .hp = 100,
        .attack = 150,
        .defense = 90,
        .evolves_to = "N/A"
    };
}