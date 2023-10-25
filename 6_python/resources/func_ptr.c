#include <stdio.h>

// Define a type for an binary operation just for ease
// This is the type of a function which takes two ints and returns an int
typedef int (*BinOp)(int a , int b );

typedef  struct _str {
    int  result ; // stores a result
    BinOp  operation; // a pointer to a function!
} STR;

int add (int a, int b) {
    return a + b ;
}

/*
* Multiple two numbers a and b 
*/

int multiply (int a, int b) {
    return a * b ;
}

int main (void){

    // Create our struct
    STR str_obj;

    // the function pointer variable points to the add function
    str_obj.operation = add; 

    // Perform the operation and store the result
    str_obj.result = str_obj.operation(5, 3);

    printf("The result is %i\n", str_obj.result );

    // Same thing with multiply
    str_obj.operation= multiply;

    str_obj. result = str_obj.operation(5, 3);

    printf ("The result is %i\n", str_obj.result );

    return 0 ;

}