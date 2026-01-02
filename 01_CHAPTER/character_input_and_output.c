#include <stdio.h>

#define IN 1
#define OUT 0

void _EOF() { printf("%d", EOF); }

void charCounter() {
  // long nc;
  // nc = 0;
  // while (getchar() != EOF) {
  //   ++nc;
  //   printf("%1d\n", nc);
  // }

  double nc;
  for (nc = 0; getchar() != EOF; ++nc)
    ; // The isolated semicolon, called a null statement,
  printf("%.0f\n", nc);
}

void lineCounter() {
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
    else if (c == 'e')
      break;

  printf("%d\n lines", nl);
}

void wordCounter() {
  int c, nl, nw, nc, state;

  state = OUT;

  nl = nw = nc = 0;
  nl = (nw = (nc = 0));

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == IN) {
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}

int main() {
  int c;

  // while (c != EOF) {
  //   putchar(c);
  //   c = getchar();
  // }

  // while ((c = getchar()) != EOF) {
  //   putchar(c);
  // }

  // charCounter();

  // lineCounter();

  wordCounter();

  return 0;
}
