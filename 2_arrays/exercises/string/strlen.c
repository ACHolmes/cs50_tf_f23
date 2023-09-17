#include <string.h>
#include <stdio.h>

int main (void) {
    char* test = "Hi\0 What happens now?";
    printf("%lu\n", strlen(test));
}