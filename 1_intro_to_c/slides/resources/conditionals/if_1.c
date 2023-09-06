#include <cs50.h>
#include <stdio.h>

int main (void) {
    int age = get_int("Please enter your age: ");
    if (age < 0) {
        printf("\nI think you're not telling the truth!\n");
    }
}