#include <stdio.h>

int main(void)
{
  struct {
    int a;
    float b;
    int c;
    char text[100];
  } myst;

  myst.a = 1;
  myst.b = 2;
  myst.c = 3;
  myst.text[0] = 1;
  printf("%d %s", myst.a, myst.text);
}
