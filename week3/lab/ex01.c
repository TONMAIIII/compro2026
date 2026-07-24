#include <stdio.h>

int main() {
    int x ,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a number: ");
    scanf("%d",&y);

    if (x == y) printf("Match");
    else printf("Does not match. Try again");

    return 0;
}