#include <stdio.h>

int main() {
    char name[100],gender, a[100];
    int age;
    float height;
    float weight;

    printf("Enter your name: ");
    scanf("%[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Enter your gender: ");
    scanf(" %c", &gender);
    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]", a);

    printf("\nName: %s\nAge: %d\nGender: %c\nHeight: %.01f\nWeight: %.01f\nEducation: %s\n", name, age, gender, height, weight, a);
    return 0;
}