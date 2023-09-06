#include <cs50.h>

int main (void) {
    string name_1 = "Andrew Holmes";
    string name_2 = "Patrick Thornton";

    int andrew_day = 3;
    int andrew_month = 10;

    int patrick_day = 12;
    int patrick_month = 7;

    printf("Our pair includes:\n");
    printf("%s, with birthday %i/%i!\n", name_1, andrew_month, andrew_day);
    printf("%s, with birthday %i/%i!\n", name_2, patrick_month, patrick_day);

}