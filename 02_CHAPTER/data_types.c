#include <limits.h>
#include <stdio.h>

void size_of_types();
void extended_types();

int main() {
  int age = 45;
  float height = 18.5;
  double pi = 3.14159;
  char grade = 'A';

  printf("Age: %d\n", age);
  printf("Height: %.1f\n", height);
  printf("Pi: %.5lf\n", pi);
  printf("Grade: %c\n", grade);

  printf("\n");

  size_of_types();

  printf("\n");

  extended_types();

  return 0;
}

void size_of_types() {
  printf("The size of int: %zu bytes\n", sizeof(int));
  printf("The size of unsigned int: %zu bytes\n", sizeof(unsigned int));
  printf("The size of long: %zu bytes\n", sizeof(long));
  printf("The size of short: %zu bytes\n", sizeof(short));
  printf("The size of char: %zu bytes\n", sizeof(char));
  printf("The size of float: %zu bytes\n", sizeof(float));
  printf("The size of double: %zu bytes", sizeof(double));
}

void extended_types() {
  int normalInt = 100;
  double normalDouble = 3.14;

  short int small = -100;
  unsigned int count = 25;
  long int big = 1234567890;
  long long veryBig = 9223372036854775807;
  unsigned long long huge = 18446744073709551615U;
  long double precise = 3.141592653589793238L;

  printf("\n");

  printf("Normal int: %d\n", normalInt);
  printf("Normal double: %lf\n", normalDouble);
  printf("Small: %hd\n", small);
  printf("Count: %u\n", count);
  printf("Big: %ld\n", big);
  printf("Very Big: %lld\n", veryBig);
  printf("Huge: %llu\n", huge);
  printf("Precise: %Lf\n", precise);

  printf("\n");

  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("Size of double: %zu bytes\n", sizeof(double));
  printf("Size of short int: %zu bytes\n", sizeof(short int));
  printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
  printf("Size of long int: %zu bytes\n", sizeof(long int));
  printf("Size of long long int: %zu bytes\n", sizeof(long long int));
  printf("Size of unsigned long long int: %zu bytes\n",
         sizeof(unsigned long long int));
  printf("Size of long double: %zu bytes\n", sizeof(long double));
}
