#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Num1: ");
    scanf("%d", &a);
    printf("Enter Num2: ");
    scanf("%d", &b);
    printf("Calculator Menu:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");
    printf("Choice menu: ");
    scanf("%d", &c);

    printf("Result: ");
    switch (c)
    {
    case 1:
        printf("Ans: Num1 + Num2 = %d", a + b);
        break;
    case 2:
        printf("Ans: Num1 - Num2 = %d", a - b);
        break;
    case 3:
        printf("Ans: Num1 * Num2 = %d", a * b);
        break;
    case 4:
        printf("Ans: Num1 / Num2 = %d", a / b);
        break;
    case 5:
        printf("Ans: Num1 %% Num2 = %d", a % b);
        break;
    default:
        break;
    }



    return 0;
}