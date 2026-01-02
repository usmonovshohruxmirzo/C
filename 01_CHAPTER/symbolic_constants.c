#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
#define FILE_NAME "symbolic_constants.c"

int main() {
  int fahr;

  printf("%s\n", FILE_NAME);

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }

  return 0;
}
