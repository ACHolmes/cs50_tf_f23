#include <stdio.h>

int worse (void);
int better (void);

#define CONDITION 1

int main (void) {
    worse();
    better();
}

int worse (void)
{
    if (CONDITION) {
        return 1;
    } else {
        return -1;
    }
}

int better (void) {
    if (CONDITION) {
        return 1;
    }
    return -1;
}