#include <stdio.h>

#define VTAB '\013'
#define BELL '\007'

int main() {
  printf("%c", VTAB);
  printf("%c", BELL);
  return 0;
}
