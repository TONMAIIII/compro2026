#include <stdio.h>
#include <math.h>

int main() {

    // int a,b,c,min,max;
    int a,b,c;
    printf("Enter integer #1: ");
    scanf("%d", &a);
    printf("Enter integer #2: ");
    scanf("%d", &b);
    printf("Enter integer #3: ");
    scanf("%d", &c);

    // if(a > b && a > c) max = a;
    // if(b > a && b > c) max = b;
    // if(c > a && c > b) max = c;

    // if(a < b && a < c) min = a;
    // if(b < a && b < c) min = b;
    // if(c < a && c < b) min = c;

    printf("Results:\nMinimum: %.1f\nMaximum: %.1f\nSum: %d\nAverage: %.2f\n", fmin(fmin(a,b),c), fmax(fmax(a,b),c), a + b + c, (float)(a + b + c) / 3);

    return 0;
}