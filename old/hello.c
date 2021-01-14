#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0); 
        printf("%3.0f %6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/* this is how you make a comment*/
// %d - print the decimal integer
// %f - print as floating point
// %.2f - print as floating point 2 char after decimal point
// %6.2f
// %o octal, %x hexadecimal, %c character, %s string, %% for % itself
