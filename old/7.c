#include <stdio.h>

void swap(int* px, int* py) 
{
  int tmp = *px;
  *px = *py;
  *py = tmp;
}

int main(void)
{
  int a = 1, b = 2;
  swap(&a, &b);
  printf("%d %d", a, b);
}
