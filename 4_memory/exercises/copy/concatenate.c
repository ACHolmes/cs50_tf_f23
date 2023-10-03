#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

char* concatenate(char* s1, char* s2);

int main (void) {
    char* s1 = get_string("Enter first string: ");
    char* s2 = get_string("Enter second string: ");
    char* s3 = concatenate(s1, s2);
    printf("Resulting string: %s\n");
    // TODO: Anything you need to do here?
}

char* concatenate(char* s1, char* s2) {
    // TODO: implement concatenate
    return NULL;
}