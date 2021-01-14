#include <stdio.h>
#define BUFSIZE 100

char buffer[BUFSIZE];
int bufdix = 0;
int getch(void) 
{
  if (bufdix > 0)
    return buffer[--bufdix];
  return getchar();
}

int main(void)
{
  

}
