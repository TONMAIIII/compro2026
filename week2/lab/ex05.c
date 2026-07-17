#include <stdio.h>

int main()
{
    char name[100];
    int age;
    float height;
    char uni_name[100];

    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your University name: ");
    scanf(" %[^\n]", uni_name);

    char xa;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' '){
            xa = name[i + 1];
            name[i] = '\0';}
        
    }

    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.01f cm tall.\n", xa, name, uni_name, age, height);

    return 0;
}