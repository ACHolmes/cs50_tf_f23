#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
    
    // Usage check
    if (argc != 2)
        return 1;
    
    // Get number of students
    int num_students = atoi(argv[1]);
    
    // Try to create an array for grades, but...
    char student_grades[num_students] = {'B'};
}