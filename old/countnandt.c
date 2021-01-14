#include <stdio.h>

int main() {
    int c;
    int nl = 0;
    int nt = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') 
            ++nl;
        if (c == '\t')
            ++nt;
    }
    printf("%d", nl);
    printf("%d", nt);
}

