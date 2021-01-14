#include <stdio.h>

int main(void)
{
  int i = 5;
  int j = 6;
  const int *p = &i;
  *p = &j; // valid, p now points to j
  

}

