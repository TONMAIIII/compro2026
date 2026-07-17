#include <stdio.h>

int main()
{
    int a = 10,b = 0;
    float c = 5.144;
    char grade = 'A';
    char d[20] = "Programming";

    printf("Int : %d, %d\n", a, b);
    printf("Float: %.3f\n", c);
    printf("Grade: %c\n", grade);
    printf("String: %s\n", d);

    printf("%c\n",&d[4]);

    return 0;
}