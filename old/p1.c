#include <stdio.h>

int main(void) 
{
  char letters[26];

  char *pc1 = letters; /* Equivalent pointer values. */
  char *pc2 = letters;
  char *pc3 = &letters[0];

  letters[4] = 'e'; /* Equivalent indexes. */
  pc1[4] = 'e';
  *(letters + 4) = 'e';
  *(pc2 + 4) = 'e';

  pc3 = &letters[10]; /* Equivalent addresses. */
  pc3 = &pc1[10];
  pc3 = letters + 10;
  pc3 = pc2 + 10;
}
