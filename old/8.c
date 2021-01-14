#include <stdio.h>
#include <ctype.h>
int main(void) 
{
  int c, d;
  while ((d = isspace(c = getchar())))
    printf("%d", d);
  printf("%c", c);
}
