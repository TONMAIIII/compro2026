#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if (x > 0 && x < 101)
    {
        if (x % 2 == 0) printf("%d is even", x);
        else printf("%d is odd", x);
    }
    else
    {
        printf("%d is out of range\n", x);
    }

    return 0;
}