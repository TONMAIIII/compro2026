#include <stdio.h>

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    int b = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] > b) {
            b = a[i];
        }
    }
    printf("Total Marks: %d\n", a[0] + a[1] + a[2] + a[3] + a[4]);
    printf("Highest Marks: %d\n", b);
    return 0;
}