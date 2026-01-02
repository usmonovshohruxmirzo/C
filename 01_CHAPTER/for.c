#include <limits.h>
#include <stdio.h>

int main() {
  int fahr;

  for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }

  printf("\n");

  // for (int i = 0; i < 10; i++) {
  //   printf("%d", i);
  // }

  for (unsigned i = 30; i-- > 0;) {
    printf("%d\n", i);
  }

  // int x = 4294967295;
  // printf("%d\n", x);

  unsigned b = 4294967295;
  printf("%u\n", b);

  printf("min: %d, max: %d", INT_MIN, INT_MAX);

  return 0;
}
