#include <stdio.h>
#include <string.h>

enum escapes { BELL = '\a', BACKSPACE = '\b' };
enum { RED = 2, GREEN };
int main() {

  enum escapes check;
  check = BELL;
  printf("hahaha %c hahahah\n", check);

  int y = GREEN; // grater then the previous variable RED by 1
  printf("%d\n", y);

  return 0;
}
