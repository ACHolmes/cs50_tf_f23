#include <stdio.h>
#include <random.h>

int worse (void);
int better (void);
int a_shed_load_of_code(void);

#define CONDITION 1

int main (void) {
    worse();
    better();
}

int worse (void)
{
    if (CONDITION) {
        // Imagine lots of code going here
        a_shed_load_of_code();
        return 0;
    } 
    return 1;
}

int better (void) {
    if (!CONDITION) {
        return 1;
    }
    // Imagine lots of code going here
    // Keep indentation under control!
    a_shed_load_of_code();
    return 0;
}

int a_shed_load_of_code(void) 
{
    // Make an array for funsies
    char useless[1000] = {'a'};

    if (useless[10]) {
        printf("Pretty useless\n");
        if (randomInteger(5, 100) > 30) {
            printf("Yummy indentation\n");
        }
        goto not_helpful;
    }

    not_helpful: char whatever = '?';

    return 5;
}