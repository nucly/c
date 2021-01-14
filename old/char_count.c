#include <stdio.h>

int main() {

  int c, i, wl, nw;
  int words[10];

  nw = wl = 0;

  for (i = 0; i < 10; ++i)
    words[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c != '\n' && c != ' ' && c != '\t')
      ++wl;
    else {
      words[nw] = wl;
      wl = 0;
      ++nw;
    }
  }

  for (i = 0; i < nw; ++i)
    printf("Word: %d has %d characters\n", i+1, words[i]);
}
