#include <stdio.h>

typedef struct X
{
    short s; /* 2 bytes */
             /* 2 padding bytes */
    int   i; /* 4 bytes */
    char  c; /* 1 byte */
             /* 3 padding bytes */
} X;

typedef struct Y
{
    int   i; /* 4 bytes */
    char  c; /* 1 byte */
             /* 1 padding byte */
    short s; /* 2 bytes */
} Y;

typedef struct version_1
{
    short s; 
    int   i; 
    char  c; 
} version_1;

typedef struct version_2
{
    int   i; /* 4 bytes */
    char  c; /* 1 byte */
             /* 1 padding byte */
    short s; /* 2 bytes */
} version_2;


int main (void) {
    printf("%i, %i\n", sizeof(X), sizeof(Y));
}