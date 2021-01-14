#include <stdio.h>

int modify(int, int);

int x = 1, y = 3, z = 5;

// <storae class> <type qualifier> <type> <identifier> = <value> ;

static const double LightSpeed = 2.9979e8;

int main(void)
{
  int x, z = 0;

  x = y + 1;
  while(x++ < 10) {
    int x, y = 0;
    x = z % 5;
    printf("In loop \tx= %d\ty= %d\tz= %d\n", x, y++, z++);
  }

  printf("Before modify()\tx= %d\ty= %d\tz= %d\n", x, y, z);
  z = modify(x, y);
  printf("After modify()\tx= %d\ty= %d\tz= %d\n", x, y, z);
} 


int modify(int a, int b)
{
  z += a + b;
  return z;
}
