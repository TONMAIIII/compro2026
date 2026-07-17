#include <stdio.h>

int main(){
    char name[20];
    float point;

    printf("Enter your name: ");
    scanf("%[^\n]", name);
    printf("Enter your point: ");
    scanf("%f", &point);

    printf("Name: %s, Point: %.1f\n", name, point);
    return 0;
}