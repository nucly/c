#include <stdio.h>

char text[9999];

void convert(char text[]) {
  for (int i = 0; i < 1000; i++) {
    if (text[i] == '\t')
      for (int j = 0; j < 2; ++j) {
        text[i+j] = ' ';
      }
  }
}

int main() 
{ 
  int c, i;

  for (i = 0; i < 9999 && (c = getchar()) != EOF; ++i) {
    text[i] = c;
  }

  printf("%s", text);
  convert(text);
  printf("%s", text);

  return 0;
}


