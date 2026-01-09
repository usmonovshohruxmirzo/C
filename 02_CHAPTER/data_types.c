#include <stdio.h>

void size_of_types();

int main() {
  int age = 45;
  float height = 18.5;
  double pi = 3.14159;
  char grade = 'A';

  printf("Age: %d\n", age);
  printf("Height: %.1f\n", height);
  printf("Pi: %.5lf\n", pi);
  printf("Grade: %c\n", grade);

  size_of_types();

  return 0;
}

void size_of_types() {
  printf("The size of int: %zu bytes\n", sizeof(int));
  printf("The size of char: %zu bytes\n", sizeof(char));
  printf("The size of float: %zu bytes\n", sizeof(float));
  printf("The size of double: %zu bytes", sizeof(double));
}

void extended_types() {}
