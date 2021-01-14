#include <stdio.h>

int main(void) {
  int i = 0;
  int c;
  char test[1000];
  while ((c = getchar()) != EOF) {
    test[i] = c;
    ++i;
  }

  printf("%s", test);
}
