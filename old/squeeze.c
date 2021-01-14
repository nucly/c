#include <stdio.h>
#include <string.h>


void squeeze(char s1[], char s2[]) {
   
    int i, j;
    i = j = 0;
    for (i = 0; i < strlen(s1);  i++) {
        printf("%c - %c\n", s1[i], s2[i]);
        if (s1[i] == s2[j])
            s1[i] = ' ';
    }
}

int main(void) 
{
        squeeze("hello", "hello");
}
