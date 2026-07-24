#include <stdio.h>

int main() {
    int a,b,c;
    char x[100];
    printf("Enter your name: ");
    scanf("%s", x);
    printf("Enter your Calculus score: ");
    scanf("%d", &a);
    printf("Enter your Physic score: ");
    scanf("%d", &b);
    printf("Enter your Science score: ");
    scanf("%d", &c);

    float z = (a + b + c) / 3.0;

    if (z >= 80)
    {
        printf("%s, you average is %.2f. You got grade A.", x, z);
    }
    else if (z >= 70)
    {
        printf("%s, you average is %.2f. You got grade B.", x, z);
    }
    else if (z >= 60)
    {
        printf("%s, you average is %.2f. You got grade C.", x, z);
    }
    else if (z >= 50)
    {
        printf("%s, you average is %.2f. You got grade D.", x, z);
    }
    else
    {
        printf("%s, you average is %.2f. You got grade F.", x, z);
    }

    return 0;
}