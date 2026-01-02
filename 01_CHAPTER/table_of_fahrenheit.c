#include <stdio.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  while (fahr <= upper) {
    celsius = 5.0 * (fahr - 32.0) / 9.0;
    // printf("%d\t%d\n", fahr, celsius);
    printf("|%10.0f | %10.1f | \n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
