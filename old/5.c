#include <stdio.h>

int main(void)
  {
  int i = 2;
  int *j = &i;
  int x = *j;

  printf("%d", x);

  char c = 'A';
  char *pc = &c;
  double d = 5.00;
  double *pd1, *pd2;

  *pc = 'B';          /* dereferenced pointer: c i snow equal to 'B'*/
  pd1 = &d;           /* pd1 not points to d*/
  pd2 = pd1;          /* pd2 and pd1 now botch point to d*/
  *pd1 = *pd2 * 2.0;  /* Equivalent to d = d * 2.0*/
  printf("%f %f %f", d, *pd1, *pd2);

  int q = 5, w =6;
  const int *p = &q; 
  p = &w; // valid
  // *p = i; invalid, cannot change j via p
}
