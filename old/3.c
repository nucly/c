#include <stdio.h>
#include <string.h>

enum escapes { BELL = '\a', BACKSPACE = '\b' };

void show(const int a) {
  printf("%d", a);
}

int main() {

  enum escapes check;
  check = BELL;
  printf("hahaha %c hahahah", check);

  show(1);

  return 0;
}
