#include <stdio.h>

int main() {
    int a,b;
    printf("Enter cone height: ");
    scanf("%d", &a);
    printf("Enter cone base radius: ");
    scanf("%d", &b);

    float v = (1.0/3.0) * ((22.0/7.0) * b * b * a);
    printf("Cone volume = %.2f", v);
    if (v > 260) printf("\nThis cone is perfect for Supun project");
    else printf("\nThis cone is not fit for this project");

    return 0;
}