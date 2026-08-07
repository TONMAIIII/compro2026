#include <stdio.h>

int main() {
    int a[8];
    int b,c;
    for (int i = 0; i < 8; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    b = a[0];
    for (int i = 0;i<8;i++){
        if (a[i] < b) b = a[i];
    }
    c = a[0];
    for (int i = 0;i<8;i++){
        if (a[i] > c) c = a[i];
    }
    printf("Smallest number: %d\n", b);
    printf("Largest number: %d\n", c);
    return 0;
}