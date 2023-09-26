#include <stdio.h>

int* bad() {
  int x = 153;
  int *ptr = &x;
  return ptr;
}

void foo() {
  int secret = 42;
  return;
}

int main(int argc, char** argv) {
  int *ptr = bad();  // get a bad pointer
  printf("*ptr is: %d\n", *ptr);
  foo();
  printf("*ptr is: %d\n", *ptr);
}
