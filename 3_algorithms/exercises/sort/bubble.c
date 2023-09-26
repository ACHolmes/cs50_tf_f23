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
    print_int_arr(nums, LENGTH);

    sort_int_arr(nums, LENGTH);
    printf("Now sorted: \n");
    print_int_arr(nums, LENGTH);

}


void print_int_arr(int nums[], int len) {
    printf("Array: [");
    for (int i = 0; i < len; i++) {
        printf("%i%s", nums[i],  (i < len - 1)  ? ", " : "");
    }
    printf("]\n");
}

void sort_int_arr(int nums[], int len) {
    bool change;
    do {
        change = false;
        for (int i = 0; i < LENGTH - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                int tmp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = tmp;
                change = true;
            }
        }
    } while (change);
}