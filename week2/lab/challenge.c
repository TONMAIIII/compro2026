#include <stdio.h>

int main() {

    int a,b,c,min,max;
    printf("Enter integer #1: ");
    scanf("%d", &a);
    printf("Enter integer #2: ");
    scanf("%d", &b);
    printf("Enter integer #3: ");
    scanf("%d", &c);

    if(a > b && a > c) max = a;
    if(b > a && b > c) max = b;
    if(c > a && c > b) max = c;

    if(a < b && a < c) min = a;
    if(b < a && b < c) min = b;
    if(c < a && c < b) min = c;

    printf("Results:\nMinimum: %d\nMaximum: %d\nSum: %d\nAverage: %.2f\n", min, max, a + b + c, (float)(a + b + c) / 3);

    return 0;
}