#include <stdio.h>

typedef int INT32;
typedef char MYCHR;

typedef struct mystruct {
  int a;
  int b;
} SUM;

int main(void)
{
  INT32 i;
  MYCHR mystr[20] = "Hello World";
  
  SUM numbers;
  numbers.a = 2;
  numbers.b = 4;


  printf("%d\n", i);
  printf("%s\n", mystr);
  printf("%d\n", numbers.a);
}
