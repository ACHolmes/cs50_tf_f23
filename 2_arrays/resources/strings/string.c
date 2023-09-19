#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void) {
    char* string_name = "Andrew";
    char array_name[7] = {'A', 'n', 'd', 'r', 'e', 'w', '\0'};

    printf("String version: %s, char array version: %s\n", 
                            string_name,            array_name);
    printf("Strlen - for string: %lu, for char array: %lu\n", 
                    strlen(string_name), strlen(array_name)); 
}