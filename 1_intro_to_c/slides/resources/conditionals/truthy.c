#include <stdio.h>

int main (void) {
    if ("is this truthy?") {
        printf("A non-empty string is truthy.\n");
    }
    if (1) {
        printf("1 seems to be truthy.\n");
    }
    if (-1) {
        printf("-1 seems to be truthy.\n");
    }
    if (0) {
        printf("Hmm, will this print?\n");
    }
    if ("") {
        printf("Hmm, an empty string?\n");
    }
    // The above one might seem weird, especially if you know Python or similar
    // But what actually is "" in C? What is cs50's string type? To demo this:
    if (""[0]) {
        printf("Hmm, what is going on here?\n");
    }
    printf("Prints: %c Hmm, how about it's ASCII value: %i\n", "hello"[5], "hello"[5]);
    // We will get into this next week, but characters are really just numbers!
    printf("Trying to print 65 as a character? Let's see: %c\n", 65);
}

