#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define LENGTH 10

int nums[LENGTH];

void print_int_arr(int nums[], int len);
void sort_int_arr(int nums[], int len);

int main (void) {
    
    // Create an array of random numbers
    for (int i = 0; i < LENGTH; i++) {
        nums[i] = rand() % 50;
    }

    // Print the initial array
    print_int_arr(nums, LENGTH);

    // Perform your sorting algorithm
    sort_int_arr(nums, LENGTH);

    // Print the resulting array
    printf("Now sorted: \n");
    print_int_arr(nums, LENGTH);

}

/*
    Helper function to nicely print the array.
*/
void print_int_arr(int nums[], int len) {
    printf("Array: [");
    for (int i = 0; i < len; i++) {
        printf("%i%s", nums[i],  (i < len - 1)  ? ", " : "");
    }
    printf("]\n");
}

/*
    Your job to implement selection sort here.
*/
void sort_int_arr(int nums[], int len) {
    // TODO: Implement selection sort here!
    return;
}