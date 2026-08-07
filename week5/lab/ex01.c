#include <stdio.h>

int main() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter the value %d here: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Values in array are: %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
    return 0;
}