#include <stdio.h>

#define IN 1
#define OUT 0

int main() 
{   
    int c, nw;
    int state = OUT;

    while ((c = getchar()) != EOF) {
        putchar(c);
        if (c == '\n' || c == ' ' || c == '\t') {
            printf("\n");
        }
    }
}
